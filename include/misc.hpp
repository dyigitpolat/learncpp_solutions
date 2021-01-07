#pragma once

//std headers
#include <string> //std::string

namespace misc
{
    struct Employee
    {
        std::string name;
    };

    // Chapter 10
    void print_employee_name( const Employee &employee);

    namespace tests
    {
        // Chapter 10
        void test_print_employee_name();
    }
}