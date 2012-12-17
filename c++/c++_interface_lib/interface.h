#ifndef GO_CPP_CPP_CPP_STATIC_LIB_INTERFACE_H_
#define GO_CPP_CPP_CPP_STATIC_LIB_INTERFACE_H_

// This file is to be used by the cgo library, so it should export
// only C stuff.
long CRandom();
// but not any C++ things, for example, CppRandom().

#endif  // GO_CPP_CPP_CPP_STATIC_LIB_INTERFACE_H_
