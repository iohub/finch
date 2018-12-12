#pragma once

#include <cctype>
#include <iostream>

#include "FinchString.h"
#include "Macros.h"
#include "Object.h"
#include "Ref.h"

#define EXPRESSION_VISITOR                                                     \
  virtual void Accept(IExprCompiler &compiler, int dest) const {               \
    compiler.Visit(*this, dest);                                               \
  }

namespace Finch {
using std::ostream;

class IExprCompiler;
class IExprVisitor;
class Object;

class Expr {
public:
  // Determines if a name is a variable name or a field name. Field names
  // start with a leading underscore.
  static bool IsField(String name) {
    ASSERT(name.Length() > 0, "Cannot determine the scope of an empty name.");

    return name[0] == '_';
  }

  virtual ~Expr() {}

  // The visitor pattern.
  virtual void Accept(IExprCompiler &compiler, int dest) const = 0;

  virtual void Trace(std::ostream &stream) const = 0;
};

ostream &operator<<(ostream &cout, const Expr &expr);
} // namespace Finch
