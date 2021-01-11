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

    class Point3d
    {
    private:
        int m_x;
        int m_y;
        int m_z;
    
    public:
        void set_values(const int x, const int y, const int z);
        void print() const;
        bool is_equal(const Point3d &p) const;
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
        void test_point3d();
    }
}