#include "misc.hpp"

//std headers
#include <string>
#include <iostream>

void misc::print_employee_name( const Employee &employee)
{
    std::cout << employee.name;
}