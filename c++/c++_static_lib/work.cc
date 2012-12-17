#include "work.h"

long CppRandom() {
  RandomNumberGenerator r(1);
  return r.Rand();
}
