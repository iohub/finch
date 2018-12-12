#include <iostream>

#include "Fiber.h"
#include "FiberObject.h"
#include "FiberPrimitives.h"
#include "Interpreter.h"
#include "Object.h"

namespace Finch {
PRIMITIVE(FiberRunning) {
  FiberObject *fiberObj = self.AsFiber();
  return fiber.CreateBool(fiberObj->GetFiber().IsRunning());
}

PRIMITIVE(FiberDone) {
  FiberObject *fiberObj = self.AsFiber();
  return fiber.CreateBool(fiberObj->GetFiber().IsDone());
}
} // namespace Finch
