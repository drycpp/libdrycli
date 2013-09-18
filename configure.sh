#/bin/sh
#export CC='ccache gcc -std=c11'
#export CXX='ccache g++ -std=c++11'
export CC='ccache clang -std=c11 -Qunused-arguments -fcolor-diagnostics'
export CXX='ccache clang++ -std=c++11 -Qunused-arguments -fcolor-diagnostics'
export CPPFLAGS=''
export CFLAGS='-g -Os'
export CXXFLAGS="$CFLAGS"
export LDFLAGS=''
./configure $*
