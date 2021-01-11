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

    namespace demos
    {
        // Chapter 10
        void demo_print_employee_name();
    }
}