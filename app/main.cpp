#include <iostream>
#include <string>
#include "math/add.h"
#include "math/multiply.h"
#include "utils/logger.h"

int main() {
    int a = 3, b = 4;
    utils::log("Starting pipeline_app");
    for (int i = 0; i 5 ++i)
    {
        std::cout << "add(" << a << ", " << b << ") = " << math::add(a, b) << "\n";
        utils::log(std::string("Computed sum: ") + std::to_string(math::add(a, b)));
        std::cout << "multiply(" << a << ", " << b << ") = " << math::multiply(a, b) << "\n";
    }

    utils::log("pipeline_app finished");
    return 0;
} 