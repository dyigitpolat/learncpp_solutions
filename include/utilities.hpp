#pragma once

//std headers
#include <utility> //std::pair
#include <vector> //std::vector
#include <array> //std::array
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

    using Coordinate_t = double;

    class Vector3d;
    
    class Point3d
    {
    private:
        Coordinate_t m_x;
        Coordinate_t m_y;
        Coordinate_t m_z;
    
    public:
        Point3d(Coordinate_t x = 0.0, Coordinate_t y = 0.0, Coordinate_t z = 0.0);

        void set_values(const Coordinate_t x, const Coordinate_t y, const Coordinate_t z);
        void print() const;
        bool is_equal(const Point3d &p) const;
        void moveByVector(const Vector3d &v);
    };

    class Vector3d
    {
    private:
        Coordinate_t m_x{};
        Coordinate_t m_y{};
        Coordinate_t m_z{};
    
    public:
        Vector3d(Coordinate_t x = 0.0, Coordinate_t y = 0.0, Coordinate_t z = 0.0);
        void print() const;

        friend void Point3d::moveByVector(const Vector3d &v);
    };

    class Stack
    {
    private:
        using container_t = std::array<int, 10>;
        using container_size_t = container_t::size_type;

        container_t m_arr;
        container_size_t m_length{};
    
    public:
        void reset();
        bool push(int val);
        int pop();
        void print() const;
    };

    namespace demos
    {
        // Chapter 9
        void demo_swap();
        void demo_print_c_str();

        // Chapter 10
        void demo_sum_to();
        void demo_minmax();
        
        // Chapter 11
        void demo_int_pair();
        void demo_point3d();
        void demo_stack();
    }
}