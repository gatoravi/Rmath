#include <iostream>
#include "Rmath.h"

int main(int argc, char* argv[]) {
    std::cout << "pbinom " << pbinom(1, 10, 0.5, true, false) <<
        std::endl;
    return 0;
}
