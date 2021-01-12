#include "misc.hpp"

//std headers
#include <string> //std::string
#include <iostream> //std::cout, std::endl

void misc::demos::demo_employee()
{
    Employee e1{};
    e1.name = "Andy";
    std::cout << "Demo Andy: ";
    print_employee_name(e1);
    std::cout << std::endl;
}

void misc::demos::demo_ball()
{
    Ball def{};
	def.print();
 
	Ball blue{ "blue" };
	blue.print();
	
	Ball twenty{ 20.0 };
	twenty.print();
	
	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();
}

void misc::demos::demo_rgba()
{
    RGBA teal{ 0, 127, 127 };
	teal.print();
}