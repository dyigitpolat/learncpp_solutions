#pragma once

//std headers
#include <string> //std::string
#include <array> //std::array

namespace lambdas
{

    using temperature_celcius_t = double;

    struct Student
    {
        std::string name;
        int score;
    };

    struct Season
    {
        std::string name;
        temperature_celcius_t average_temperature;
    };

    void print_student_with_best_score( const std::array<Student, 8> &arr);
    void sort_seasons_by_temperatures( std::array<Season, 4> &arr);

    void math_game();

    namespace demos
    {
        void demo_print_student_with_best_score();
        void demo_sort_seasons_by_temperatures();
        void demo_math_game();
    }
}