
cmake_minimum_required(VERSION 3.8)

project(finch CXX)

set (CMAKE_CXX_STANDARD 11)

include_directories ("${PROJECT_SOURCE_DIR}/src")
include_directories ("${PROJECT_SOURCE_DIR}/src/Base")
include_directories ("${PROJECT_SOURCE_DIR}/src/Syntax")
include_directories ("${PROJECT_SOURCE_DIR}/src/Compiler")
include_directories ("${PROJECT_SOURCE_DIR}/src/Interpreter")
include_directories ("${PROJECT_SOURCE_DIR}/src/Interpreter/Objects")
include_directories ("${PROJECT_SOURCE_DIR}/src/Syntax/AST")
include_directories ("${PROJECT_SOURCE_DIR}/src/Interpreter/Primitives")

set(SRC_LIST src/main.cpp
      src/Base/Array.h
      src/Base/Dictionary.h
      src/Base/FinchString.cpp
      src/Base/FinchString.h
      src/Base/Macros.h
      src/Base/Queue.h
      src/Base/Ref.h
      src/Base/Stack.h
      src/Base/StringTable.cpp
      src/Base/StringTable.h
      src/Compiler/Block.cpp
      src/Compiler/Block.h
      src/Compiler/Compiler.cpp
      src/Compiler/Compiler.h
      src/finch.1
      src/IErrorReporter.h
      src/IInterpreterHost.h
      src/Interpreter/ArgReader.h
      src/Interpreter/Fiber.cpp
      src/Interpreter/Fiber.h
      src/Interpreter/FileLineReader.cpp
      src/Interpreter/FileLineReader.h
      src/Interpreter/Objects/ArrayObject.h
      src/Interpreter/Objects/BlockObject.h
      src/Interpreter/Objects/BlockObject.cpp
      src/Interpreter/Objects/DynamicObject.cpp
      src/Interpreter/Objects/DynamicObject.h
      src/Interpreter/Objects/FiberObject.h
      src/Interpreter/Objects/NumberObject.h
      src/Interpreter/Objects/Object.cpp
      src/Interpreter/Objects/Object.h
      src/Interpreter/Objects/StringObject.h
      src/Interpreter/Primitives/ArrayPrimitives.cpp
      src/Interpreter/Primitives/ArrayPrimitives.h
      src/Interpreter/Primitives/BlockPrimitives.cpp
      src/Interpreter/Primitives/BlockPrimitives.h
      src/Interpreter/Primitives/FiberPrimitives.cpp
      src/Interpreter/Primitives/FiberPrimitives.h
      src/Interpreter/Primitives/IoPrimitives.cpp
      src/Interpreter/Primitives/IoPrimitives.h
      src/Interpreter/Primitives/NumberPrimitives.cpp
      src/Interpreter/Primitives/NumberPrimitives.h
      src/Interpreter/Primitives/ObjectPrimitives.cpp
      src/Interpreter/Primitives/ObjectPrimitives.h
      src/Interpreter/Primitives/StringPrimitives.cpp
      src/Interpreter/Primitives/StringPrimitives.h
      src/Interpreter/Primitives.cpp
      src/Interpreter/Primitives.h
      src/Interpreter/Upvalue.cpp
      src/Interpreter/Upvalue.h
      src/Interpreter.cpp
      src/Interpreter.h
      src/ReplLineReader.cpp
      src/ReplLineReader.h
      src/StandaloneInterpreterHost.cpp
      src/StandaloneInterpreterHost.h
      src/Syntax/AST/ArrayExpr.h
      src/Syntax/AST/BindExpr.h
      src/Syntax/AST/BlockExpr.h
      src/Syntax/AST/DefineExpr.h
      src/Syntax/AST/Expr.cpp
      src/Syntax/AST/Expr.h
      src/Syntax/AST/IExprCompiler.h
      src/Syntax/AST/MessageExpr.h
      src/Syntax/AST/NameExpr.h
      src/Syntax/AST/NumberExpr.h
      src/Syntax/AST/ObjectExpr.h
      src/Syntax/AST/ReturnExpr.h
      src/Syntax/AST/SelfExpr.h
      src/Syntax/AST/SequenceExpr.h
      src/Syntax/AST/SetExpr.h
      src/Syntax/AST/StringExpr.h
      src/Syntax/AST/UndefineExpr.h
      src/Syntax/AST/VarExpr.h
      src/Syntax/FinchParser.cpp
      src/Syntax/FinchParser.h
      src/Syntax/ILineReader.h
      src/Syntax/ITokenSource.h
      src/Syntax/Lexer.cpp
      src/Syntax/Lexer.h
      src/Syntax/LineNormalizer.cpp
      src/Syntax/LineNormalizer.h
      src/Syntax/Parser.cpp
      src/Syntax/Parser.h
      src/Syntax/Token.cpp
      src/Syntax/Token.h
      )


add_executable(finch ${SRC_LIST})
