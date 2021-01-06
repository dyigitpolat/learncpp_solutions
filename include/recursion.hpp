#pragma once

namespace recursion
{
    int factorial( const int n );
    int sum_of_digits( const int n );
    void print_binary_representation_helper( const unsigned int n );
    void print_binary_representation( const int n );

    namespace tests
    {
        void test_factorial();
        void test_sum_of_digits();
        void test_print_binary_representation();
    }
}