#pragma once

#include "Expr.h"
#include "FinchString.h"
#include "Macros.h"
#include "Object.h"
#include "Ref.h"

namespace Finch {
// Primitive methods for dynamic (i.e. regular) objects.
PRIMITIVE(ObjectToString);
PRIMITIVE(ObjectSame);
PRIMITIVE(ObjectGetParent);
} // namespace Finch
