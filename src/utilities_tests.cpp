#include "utilities.hpp"

//std headers
#include <iostream>

void utilities::tests::test_swap()
{
    int a { 33 };
    int b { 55 };

    std::cout << "Testing swap implementation... " << std::endl;

    std::cout << "Before swap: " << std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;

    swap(a, b);

    std::cout << "After swap: " << std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;
    std::cout << std::endl;
}

void utilities::tests::test_print_c_str()
{
    char arr1[] = "Step through each character.";
    char arr2[] = "Stop when you hit the null terminator.";

    std::cout << "Testing C-style string print implementation... " << std::endl;
    std::cout << "Test string 1: " << arr1  << std::endl;
    std::cout << "Test string 2: " << arr2  << std::endl;

    std::cout << "Printing #1: " << std::endl;
    print_c_string(arr1);

    std::cout << "Printing #2: " << std::endl;
    print_c_string(arr2);

    std::cout << std::endl;
}