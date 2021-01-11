#include "misc.hpp"

//std headers
#include <string> //std::string
#include <iostream> //std::cout, std::endl

void misc::demos::demo_print_employee_name()
{
    Employee e1{};
    e1.name = "Andy";
    std::cout << "Demo Andy: ";
    print_employee_name(e1);
    std::cout << std::endl;
}