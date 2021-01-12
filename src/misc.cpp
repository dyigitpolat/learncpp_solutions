#include "misc.hpp"

//std headers
#include <iostream> //std::cout, std::endl

void misc::print_employee_name(const Employee &employee)
{
    std::cout << employee.name;
}

misc::Ball::Ball(const std::string &color, double radius) :
    m_color{color}, m_radius{radius}
{

}

misc::Ball::Ball(const std::string &color) :
    m_color{color}
{

}

misc::Ball::Ball(double radius) :
    m_radius{radius}
{

}

void misc::Ball::print() const
{
    std::cout << "color: " << m_color << ", radius: " << m_radius << std::endl;
}