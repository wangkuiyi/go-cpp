# Go-Cpp #

This project demonstrates how to call C++ code from Go program without
the need of using SWIG.

The basic idea is to write a
[C wrapper](https://github.com/wangkuiyi/go-cpp/tree/master/c%2B%2B/c%2B%2B_interface_lib)
of
[C++ code](https://github.com/wangkuiyi/go-cpp/tree/master/c%2B%2B/c%2B%2B_static_lib),
and use `cgo` to call this C wrapper.

## Checkout and Build

    git clone -b develop https://github.com/wangkuiyi/go-cpp
    cd go-cpp/c++
    scons
    cd ../go
    export GOPATH=`pwd`
    cd src/go_prog
    go install
    DYLD_LIBRARY_PATH=$GOPATH/../c++/ $GOPATH/bin/go_prog

Note that you need to install SCons to build the C++ part.  In order
to install SCons on Mac OS X, you can use Homebrew.

If you are using Linux, the last command to run the demo program is:

    LD_LIBRARY_PATH=$GOPATH/../c++/ $GOPATH/bin/go_prog
