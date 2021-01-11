#include "utilities.hpp"

//std headers
#include <iostream> //std::cout, std::endl

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

    std::cout << "Testing C-style string printing... " << std::endl;
    std::cout << "Test string 1: " << arr1  << std::endl;
    std::cout << "Test string 2: " << arr2  << std::endl;

    std::cout << "Printing #1: " << std::endl;
    print_c_string(arr1);

    std::cout << "Printing #2: " << std::endl;
    print_c_string(arr2);

    std::cout << std::endl;
}

void utilities::tests::test_sum_to()
{
    int value{50};

    std::cout << "Testing min-max... " << std::endl;
    std::cout << "Sum of values from 1 to " << value << " : " << std::endl;
    std::cout << sum_to(value) << std::endl;

    std::cout << std::endl;
}

void utilities::tests::test_minmax()
{
    int a{};
    int b{};

    std::cout << "Testing min-max... " << std::endl;

    {
        a = -3; b = 5;
        std::cout << "Testing for " << a << " and " << b << ":" << std::endl;
        auto [min, max] = minmax(a, b);
        std::cout << "Min-Max: " << min << " " << max << std::endl;
    }

    {
        a = -1; b = -2;
        std::cout << "Testing for " << a << " and " << b << ":" << std::endl;
        auto [min, max] = minmax(a, b);
        std::cout << "Min-Max: " << min << " " << max << std::endl;
    }

    {
        a = 7; b = 7;
        std::cout << "Testing for " << a << " and " << b << ":" << std::endl;
        auto [min, max] = minmax(a, b);
        std::cout << "Min-Max: " << min << " " << max << std::endl;
    }

    std::cout << std::endl;
}

void utilities::tests::test_int_pair()
{
    std::cout << "Testing int pair... " << std::endl;

    IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)
	
	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)
 
	p1.print();
	p2.print();
    std::cout << std::endl;
}


void utilities::tests::test_point3d()
{
    std::cout << "Testing 3d point... " << std::endl;

    Point3d point;
    point.set_values(1, 2, 3);
 
    point.print();

    Point3d point1;
    point1.set_values(1, 2, 3);
 
    Point3d point2;
    point2.set_values(1, 2, 3);
 
    if (point1.is_equal(point2))
    {
        std::cout << "point1 and point2 are equal\n";
    }
    else
    {
        std::cout << "point1 and point2 are not equal\n";
    }
 
    Point3d point3;
    point3.set_values(3, 4, 5);
 
    if (point1.is_equal(point3))
    {
        std::cout << "point1 and point3 are equal\n";
    }
    else
    {
        std::cout << "point1 and point3 are not equal\n";
    }
    
    std::cout << std::endl;
}