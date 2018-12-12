#pragma once

#include <iostream>

#include "Array.h"
#include "DefineExpr.h"
#include "Expr.h"
#include "FinchString.h"
#include "IExprCompiler.h"
#include "Macros.h"
#include "Ref.h"

namespace Finch {
using std::ostream;

// AST node for a series of method definitions on some target object.
class BindExpr : public DefineExpr {
public:
  BindExpr(Ref<Expr> target) : mTarget(target) {}

  Ref<Expr> Target() const { return mTarget; }

  virtual void Trace(ostream &stream) const {
    stream << mTarget << " :: ";

    if (Definitions().Count() == 1) {
      stream << Definitions()[0].GetName() << " " << Definitions()[0].GetBody();
    } else {
      stream << "( ";

      for (int i = 0; i < Definitions().Count(); i++) {
        stream << Definitions()[0].GetName() << " "
               << Definitions()[0].GetBody();
      }

      stream << " )";
    }
  }

  EXPRESSION_VISITOR

private:
  // The object the properties are being defined on.
  Ref<Expr> mTarget;
};
} // namespace Finch
