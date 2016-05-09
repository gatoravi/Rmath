[![Build Status](https://travis-ci.org/gatoravi/Rmath.svg?branch=master)](https://travis-ci.org/gatoravi/Rmath)
#Rmath

The Rmath library from R

This was modified from the RMath repository from Julia-Lang
to obviate the need to set `MATHLIB_STANDALONE` and to
generate a static library by default.

##Compile
To compile:
- Original
```
    cd lib
    make release
```

- With cmake, this examples compiles and calls the pbinom function
from a C++ function.
```
    mkdir build && cd build
    cmake ..
    make
    ./Rmath_test
```
