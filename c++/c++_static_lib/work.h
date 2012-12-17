#ifndef GO_CPP_CPP_CPP_STATIC_LIB_WORK_H_
#define GO_CPP_CPP_CPP_STATIC_LIB_WORK_H_

#include <stdlib.h>

class RandomNumberGenerator {
 public:
  RandomNumberGenerator(unsigned int seed) {
    // A real random number generator should not delegates the work to
    // srandom/random.
    srandom(seed);
  }

  long Rand() {
    return random();
  }
};

#endif  // GO_CPP_CPP_CPP_STATIC_LIB_WORK_H_
