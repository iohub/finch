#pragma once

#include <iostream>

#include "Expr.h"
#include "FinchString.h"
#include "IExprCompiler.h"
#include "Macros.h"

namespace Finch {
using std::ostream;

// AST node for the "self" reserved word
class SelfExpr : public Expr {
public:
  SelfExpr() {}

  virtual void Trace(ostream &stream) const { stream << "self"; }

  EXPRESSION_VISITOR
};
} // namespace Finch
