#pragma once

#include <fstream>
#include <iostream>

#include "FinchString.h"
#include "ILineReader.h"
#include "Macros.h"

namespace Finch {
using std::ifstream;

// A line reader that reads from a file.
class FileLineReader : public ILineReader {
public:
  FileLineReader(String fileName);

  virtual bool IsInfinite() const;
  virtual bool EndOfLines() const;
  virtual String NextLine();

private:
  ifstream mFile;
};
} // namespace Finch
