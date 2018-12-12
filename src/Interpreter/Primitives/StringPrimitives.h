#pragma once

#include "Expr.h"
#include "FinchString.h"
#include "Macros.h"
#include "Object.h"
#include "Ref.h"

namespace Finch {
// Primitive methods for string objects.
PRIMITIVE(StringCount);
PRIMITIVE(StringAt);
PRIMITIVE(StringFromCount);
PRIMITIVE(StringIndexOf);
PRIMITIVE(StringHashCode);
} // namespace Finch
