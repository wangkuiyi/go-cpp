// If it complains cannot find the shared library when you run this
// program, please export DYLD_LIBRARY_PATH=<go-cpp/c++> if you use OS
// X, or export LD_LIBRARY_PATH=<go-cpp/c++> if you use Linux.
package main

import (
	"cgo_lib"
	"fmt"
)

func main() {
	fmt.Println(cgo_lib.GoRandom())
}
