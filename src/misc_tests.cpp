#include "misc.hpp"

//std headers
#include <string> //std::string
#include <iostream> //std::cout, std::endl

void misc::tests::test_print_employee_name()
{
    Employee e1{};
    e1.name = "Andy";

    std::cout << "Testing Employee name printing... " << std::endl;
    std::cout << "Test Andy: ";
    print_employee_name(e1);
    std::cout << std::endl;

    std::cout << std::endl;
}