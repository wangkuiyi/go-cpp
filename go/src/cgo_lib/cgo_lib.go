package cgo_lib

// #cgo darwin CFLAGS: -I../../../c++/
// #cgo darwin LDFLAGS: -L../../../c++ -lcppinterfacelib
// #include "c++_interface_lib/interface.h"
import "C"

func GoRandom() int {
	return int(C.CRandom())
}
