# Go-Cpp #

This project demonstrates how to make Go programs call C++ facilities.

The basic idea is to write a
[C wrapper](https://github.com/wangkuiyi/go-cpp/tree/master/c%2B%2B/c%2B%2B_interface_lib)
of the
[C++ facilities](https://github.com/wangkuiyi/go-cpp/tree/master/c%2B%2B/c%2B%2B_static_lib),
and use `cgo` to call this C wrapper.

However, it is known that C programs cannot call C++ facilities.  The
trick is to write the wrapper in C++, so it can contain some C
functions defined using `extern "C"`; and exports only these C
functions to `cgo`.

It is also notable that `cgo` allows Go programs to call C functions
in shared libraries only.  So we need to build the wrapper as a shared
library.  To do so, we build the C++ facilities into a static library,
which is then linked into the wrapper (shared) library.

In this example project, we use `SCons` to build C++ code.
