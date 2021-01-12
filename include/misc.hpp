#pragma once

//std headers
#include <string> //std::string
#include <cstdint> //uint_fast8_t

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

    class RGBA
    {
    private:
        using color_value_t = std::uint_fast8_t;
        color_value_t m_red{};
        color_value_t m_green{};
        color_value_t m_blue{};
        color_value_t m_alpha{255};
    
    public:
        RGBA(
            color_value_t red = 0,
            color_value_t green = 0,
            color_value_t blue = 0,
            color_value_t alpha = 255
        );
        void print() const;
    };

    namespace demos
    {
        // Chapter 10
        void demo_employee();
        
        // Chapter 11
        void demo_ball();
        void demo_rgba();
    }
}