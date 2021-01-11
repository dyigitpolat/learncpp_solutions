#pragma once

//std headers
#include <utility> //std::pair
#include <vector> //std::vector
#include <string> //std::string

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
    double max_value(const double a, const double b);

    //Chapter 11
    class IntPair
    {
    public:
        int m_a;
        int m_b;

        void set(const int a, const int b);
        void print();
    };

    namespace tests
    {
        // Chapter 9
        void test_swap();
        void test_print_c_str();

        // Chapter 10
        void test_sum_to();
        void test_minmax();
        
        // Chapter 11
        void test_int_pair();
    }
}