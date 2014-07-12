package cgo_lib

// #cgo CFLAGS: -I../../../c++/
// #cgo LDFLAGS: -L../../../c++ -lcppinterfacelib
// #include "c++_interface_lib/interface.h"
import "C"

func GoRandom() int {
	return int(C.CRandom())
}
