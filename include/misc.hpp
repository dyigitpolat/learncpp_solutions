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

    // Chapter 11
    class Ball
    {
        std::string m_color{"black"};
        double m_radius{10.0};

    public:
        Ball() = default;
        Ball(const std::string &color, double radius);
        Ball(const std::string &color);
        Ball(double radius);

        void print() const;
    };

    namespace demos
    {
        // Chapter 10
        void demo_print_employee_name();
        
        // Chapter 11
        void demo_ball();
    }
}