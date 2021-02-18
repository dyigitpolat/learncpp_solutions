#include "utilities.hpp"

//std headers
#include <iostream> //std::cout, std::endl

void utilities::demos::demo_swap()
{
    int a { 33 };
    int b { 55 };

    std::cout << "Before swap: " << std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;

    swap(a, b);

    std::cout << "After swap: " << std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;
}

void utilities::demos::demo_print_c_str()
{
    char arr1[] = "Step through each character.";
    char arr2[] = "Stop when you hit the null terminator.";

    std::cout << "Demo string 1: " << arr1  << std::endl;
    std::cout << "Demo string 2: " << arr2  << std::endl;

    std::cout << "Printing #1: " << std::endl;
    print_c_string(arr1);

    std::cout << "Printing #2: " << std::endl;
    print_c_string(arr2);

}

void utilities::demos::demo_sum_to()
{
    int value{50};

    std::cout << "Sum of values from 1 to " << value << " : " << std::endl;
    std::cout << sum_to(value) << std::endl;

}

void utilities::demos::demo_minmax()
{
    int a{};
    int b{};

    {
        a = -3; b = 5;
        std::cout << "Demoing for " << a << " and " << b << ":" << std::endl;
        auto [min, max] = minmax(a, b);
        std::cout << "Min-Max: " << min << " " << max << std::endl;
    }

    {
        a = -1; b = -2;
        std::cout << "Demoing for " << a << " and " << b << ":" << std::endl;
        auto [min, max] = minmax(a, b);
        std::cout << "Min-Max: " << min << " " << max << std::endl;
    }

    {
        a = 7; b = 7;
        std::cout << "Demoing for " << a << " and " << b << ":" << std::endl;
        auto [min, max] = minmax(a, b);
        std::cout << "Min-Max: " << min << " " << max << std::endl;
    }
}

void utilities::demos::demo_int_pair()
{

    IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)
	
	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)
 
	p1.print();
	p2.print();
}

void utilities::demos::demo_point3d()
{
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

    Point3d p{1.0, 2.0, 3.0};
	Vector3d v{2.0, 2.0, -3.0};
 
	p.print();
    std::cout << "To be moved by: \n";
    v.print();
	p.moveByVector(v);
    std::cout << "Moved point now at: \n";
	p.print();
}

void utilities::demos::demo_stack()
{
    Stack stack;
	stack.reset();
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
	stack.print();
}