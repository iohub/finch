#pragma once

#include <iostream>
#include <sstream>

#include "FinchString.h"
#include "Macros.h"
#include "Object.h"
#include "Ref.h"

namespace Finch {
using std::ostream;
using std::stringstream;

// Object class for a number. All numbers in Finch are floating point.
class NumberObject : public Object {
public:
  NumberObject(const Value &parent, double value)
      : Object(parent), mValue(value) {}

  virtual void Trace(ostream &stream) const { stream << mValue; }

  virtual double AsNumber() const { return mValue; }
  virtual String AsString() const {
    stringstream result;
    result << mValue;
    return String(result.str().c_str());
  }

private:
  double mValue;
};
} // namespace Finch
