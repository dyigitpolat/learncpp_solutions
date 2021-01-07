#include "recursion.hpp"

//std headers
#include <iostream> //std::cout, std::endl

int recursion::factorial( const int n )
{
    if( n <= 1 ) 
    {
        return 1;
    }

    return factorial(n-1) * n;
}

int recursion::sum_of_digits( const int n )
{
    if( n <= 0 ) 
    {
        return 0;
    }

    return sum_of_digits( n / 10 ) + (n % 10);
}

void recursion::print_binary_representation_helper( const unsigned int n )
{
    if( n <= 0)
    {
        return;
    }

    print_binary_representation_helper( n >> 1 );
    std::cout << (n & 0x01);
}

void recursion::print_binary_representation( const int n )
{
    if( n == 0 )
    {
        std::cout << 0;
    }
    else
    {
        print_binary_representation_helper( n );
    }

    std::cout << std::endl;
}