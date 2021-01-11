#include "lambdas.hpp"

//std headers
#include <iostream> //std::cout, std::endl

void lambdas::demos::demo_print_student_with_best_score()
{
    std::array<Student, 8> arr{
        {{"Albert", 3},
         {"Ben", 5},
         {"Christine", 2},
         {"Dan", 8}, // Dan has the most points (8).
         {"Enchilada", 4},
         {"Francis", 1},
         {"Greg", 3},
         {"Hagrid", 5}}};

    print_student_with_best_score(arr);
}

void lambdas::demos::demo_sort_seasons_by_temperatures()
{
    std::array<Season, 4> seasons{
        {{"Spring", 13.5},
         {"Summer", 27.8},
         {"Fall", 7.4},
         {"Winter", -5.4}}};

    sort_seasons_by_temperatures(seasons);

    for (const auto &season : seasons)
    {
        std::cout << season.name << std::endl;
    }
}

void lambdas::demos::demo_math_game()
{
    math_game();
}