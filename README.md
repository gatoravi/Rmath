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

- With cmake
```
    mkdir build && cd build
    cmake ..
    make
    ./Rmath_test
```
