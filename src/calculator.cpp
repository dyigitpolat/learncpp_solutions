#include "calculator.hpp"

//std headers
#include <iostream> //std::cout, std::endl

int calculator::add(const int a, const int b)
{
    return a + b;
}

int calculator::subtract(const int a, const int b)
{
    return a - b;
}

int calculator::multiply(const int a, const int b)
{
    return a * b;
}

int calculator::divide(const int a, const int b)
{
    return a / b;
}

calculator::ArithmeticFunction calculator::get_arithmetic_function( const operator_sign_t c)
{
    switch( c)
    {
        case '+':
            return add;
        case '-':
            return subtract;
        case '*':
            return multiply;
        case '/':
            return divide;
        default:
            return nullptr;
    }
}

void calculator::start()
{
    operator_sign_t op{};
    ArithmeticFunction func{};
    int a{};
    int b{};

    do
    {
        std::cout << "Enter operation ( +, -, *, / ) : ";
        std::cin >> op;
        func = get_arithmetic_function(op);
    } while ( func == nullptr);

    std::cout << "Enter value 1: ";
    std::cin >> a;
    
    std::cout << "Enter value 2: ";
    std::cin >> b;

    std::cout << a  << op << b << " = " << func(a,b) << std::endl;
    
}