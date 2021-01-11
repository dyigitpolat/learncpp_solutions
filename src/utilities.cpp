#include "utilities.hpp"

//std headers
#include <iostream> //std::cout, std::endl
#include <utility> //std::pair
#include <algorithm> //std::max_element

void utilities::swap( int &a, int &b)
{
    int t { std::move(a) };
    a = std::move(b);
    b = std::move(t);
}

void utilities::print_c_string( char * str)
{
    for( char * p = str; *p != 0; p++)
    {
        std::cout << *p;
    }
    std::cout << std::endl;
}

int utilities::sum_to( const int value)
{
    return value * (value + 1) / 2;
}

std::pair<int, int> utilities::minmax( const int a, const int b)
{
    return a < b ? std::pair{a, b} : std::pair{b, a};
}

int utilities::get_index_of_largest( const std::vector<int> &vec)
{
    return *std::max_element(vec.begin(), vec.end());
}

const std::string& utilities::get_element( const std::vector<std::string> &vec, const int index)
{
    return vec[index];
}

double utilities::max_value(const double a, const double b)
{
    return a > b ? a : b;
}

void utilities::IntPair::set(const int a, const int b)
{
    m_a = a;
    m_b = b;
}

void utilities::IntPair::print()
{
    std::cout << "Pair(" << m_a << ", " << m_b << ")" << std::endl;
}