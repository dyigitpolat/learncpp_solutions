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

misc::RGBA::RGBA(
            color_value_t red,
            color_value_t green,
            color_value_t blue,
            color_value_t alpha
        ) :
    m_red{ red },
    m_green{ green },
    m_blue{ blue },
    m_alpha{ alpha }
{

}

void misc::RGBA::print() const
{
    std::cout 
        <<  "r=" << static_cast<int>(m_red)
        << " g=" << static_cast<int>(m_green)
        << " b=" << static_cast<int>(m_blue)
        << " a=" << static_cast<int>(m_alpha)
    << std::endl;
}