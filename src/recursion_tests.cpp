#include "recursion.hpp"

//std headers
#include <iostream> //std::cout, std::endl

void recursion::tests::test_factorial()
{
    for(int i = 0; i < 8; ++i)
    {
        std::cout << "Factorial of " << i << ": " << factorial(i) << std::endl;

    }
}

void recursion::tests::test_sum_of_digits()
{
    int i{};

    i = 0;
    std::cout << "Sum of the digits of " << i << ": " << sum_of_digits(i) << std::endl;
    i = 123;
    std::cout << "Sum of the digits of " << i << ": " << sum_of_digits(i) << std::endl;
    i = 9999;
    std::cout << "Sum of the digits of " << i << ": " << sum_of_digits(i) << std::endl;
    i = 1;
    std::cout << "Sum of the digits of " << i << ": " << sum_of_digits(i) << std::endl;
}

void recursion::tests::test_print_binary_representation()
{
    int user_number{};
    std::cout << "Enter number: ";
    std::cin >> user_number;

    print_binary_representation(user_number);
}