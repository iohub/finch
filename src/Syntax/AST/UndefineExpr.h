#pragma once

#include <iostream>

#include "Expr.h"
#include "FinchString.h"
#include "IExprCompiler.h"
#include "Macros.h"
#include "Ref.h"

namespace Finch {
using std::ostream;

// AST node for local variable undefinition: "foo <- undefined"
class UndefineExpr : public Expr {
public:
  UndefineExpr(String name) : mName(name) {}

  String Name() const { return mName; }

  virtual void Trace(ostream &stream) const {
    stream << mName << " <- undefined";
  }

  EXPRESSION_VISITOR

private:
  // the name of the variable
  String mName;
};
} // namespace Finch
