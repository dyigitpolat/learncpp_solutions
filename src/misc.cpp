#include "misc.hpp"

//std headers
#include <iostream> //std::cout, std::endl

void misc::print_employee_name( const Employee &employee)
{
    std::cout << employee.name;
}