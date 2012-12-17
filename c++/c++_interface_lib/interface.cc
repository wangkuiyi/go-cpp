#include "../c++_static_lib/work.h"
// Thie file, as a C++ source file, should not include C interfacing
// header files, i.e., "interface.h".

extern "C" {
  long CRandom() {
    // As the rng is seeded in every call, it is not random at all.
    RandomNumberGenerator r(1);
    return r.Rand();
  }
}
