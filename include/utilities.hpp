#pragma once

//std headers
#include <utility>
#include <vector>
#include <string>

namespace utilities
{
    // Chapter 9
    void swap( int &a, int &b);
    void print_c_string( char * str);

    // Chapter 10
    int sum_to( const int value);
    std::pair<int, int> minmax( const int a, const int b);
    int get_index_of_largest( const std::vector<int> &vec);
    const std::string& get_element( const std::vector<std::string> &vec, const int index);

    namespace tests
    {
        // Chapter 9
        void test_swap();
        void test_print_c_str();

        // Chapter 10
        void test_sum_to();
        void test_minmax();
    }
}