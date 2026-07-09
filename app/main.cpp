#include <iostream>
//#include "math/add.h"
#include "math/multiply.h"
#include "utils/logger.h"

int main() {
    int a = 3, b = 4;
    utils::log("Starting pipeline_app");
    std::cout << "add(" << a << ", " << b << ") = " << math::add(a, b) << "\n";
    std::cout << "multiply(" << a << ", " << b << ") = " << math::multiply(a, b) << "\n";
    utils::log("pipeline_app finished")
    return 0;
}
