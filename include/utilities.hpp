#pragma once

namespace utilities
{
    void swap( int &a, int &b);
    void print_c_string( char * str);

    namespace tests
    {
        void test_swap();
        void test_print_c_str();
    }
}