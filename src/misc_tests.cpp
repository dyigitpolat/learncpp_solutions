#include "misc.hpp"

//std headers
#include <string> //std::string
#include <iostream> //std::cout, std::endl

void misc::tests::test_print_employee_name()
{
    Employee e1{};
    e1.name = "Andy";
    std::cout << "Test Andy: ";
    print_employee_name(e1);
    std::cout << std::endl;
}