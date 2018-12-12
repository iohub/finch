#pragma once

#include <iostream>

#include "Expr.h"
#include "FinchString.h"
#include "IExprCompiler.h"
#include "Macros.h"
namespace Finch {
using std::ostream;

// AST node for a named object: "foo"
class NameExpr : public Expr {
public:
  NameExpr(String name) : mName(name) {}

  String Name() const { return mName; }

  virtual void Trace(ostream &stream) const { stream << mName; }

  EXPRESSION_VISITOR

private:
  String mName;
};
} // namespace Finch
