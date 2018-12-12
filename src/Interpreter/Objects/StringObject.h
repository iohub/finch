#pragma once

#include <iostream>

#include "FinchString.h"
#include "Macros.h"
#include "Object.h"
#include "Ref.h"

namespace Finch {
using std::ostream;

// Object class for a string.
class StringObject : public Object {
public:
  StringObject(const Value &parent, String value)
      : Object(parent), mValue(value) {}

  virtual void Trace(ostream &stream) const {
    stream << "\"" << mValue << "\"";
  }

  virtual String AsString() const { return mValue; }

private:
  String mValue;
};
} // namespace Finch
