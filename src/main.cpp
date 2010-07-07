#include <iostream>

#include "FileLineReader.h"
#include "FinchString.h"
#include "Interpreter.h"
#include "Ref.h"
#include "Repl.h"
#include "Script.h"
#include "StandaloneInterpreterHost.h"

//#define UNIT_TESTS

#ifdef UNIT_TESTS

#include "TestMain.h"

#endif

using namespace Finch;

using std::cout;
using std::endl;

int main (int argc, char * const argv[])
{
    #ifdef UNIT_TESTS
    TestMain::Run();
    return 0;
    #endif
    
    StandaloneInterpreterHost host;
    Interpreter               interpreter(host);
    
    // load the base library
    //### bob: hard-coded path here is a total hack
#ifdef HACK_ROOT_BASE_PATH
    const char* baseLibPath = "base/main.fin";
#else
    const char* baseLibPath = "../../base/main.fin";
#endif
    if (!interpreter.InterpretFile(baseLibPath))
    {
        cout << "Could not load base library." << endl;
        return 2;
    }
    
    if (argc == 1)
    {
        // with no arguments (arg zero is app), run in interactive mode
        Repl repl;    
        repl.Run(interpreter);
    }
    else if (argc == 2)
    {
        // one argument, load and execute the given script
        String fileName = argv[1];
        return interpreter.InterpretFile(fileName) ? 0 : 1;
    }
    
    return 0;
}

