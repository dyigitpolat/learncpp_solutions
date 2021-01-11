#pragma once

namespace recursion
{
    int factorial( const int n );
    int sum_of_digits( const int n );
    void print_binary_representation_helper( const unsigned int n );
    void print_binary_representation( const int n );

    namespace demos
    {
        void demo_factorial();
        void demo_sum_of_digits();
        void demo_print_binary_representation();
    }
}