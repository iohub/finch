#pragma once

#include <iostream>

#include "FinchString.h"
#include "ILineReader.h"
#include "Macros.h"

namespace Finch {
// A line reader that reads them by prompting the user and reading from
// standard in.
class ReplLineReader : public ILineReader {
public:
  ReplLineReader() : mFirstLine(true) {}

  void Reset() { mFirstLine = true; }

  virtual bool IsInfinite() const;
  virtual bool EndOfLines() const;
  virtual String NextLine();

private:
  bool mFirstLine;
};
} // namespace Finch
