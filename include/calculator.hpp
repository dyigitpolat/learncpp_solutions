#pragma once

#include <functional>

namespace calculator
{
    using ArithmeticFunction = std::function<int(const int, const int)>;
    using operator_sign_t = char;

    int add(const int a, const int b);
    int subtract(const int a, const int b);
    int multiply(const int a, const int b);
    int divide(const int a, const int b);

    ArithmeticFunction get_arithmetic_function( const operator_sign_t c);

    void start();

    namespace tests
    {
        void test_calculator();
    }
}