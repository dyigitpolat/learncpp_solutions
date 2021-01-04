#include "utilities.hpp"

//std headers
#include <iostream>
#include <utility>

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