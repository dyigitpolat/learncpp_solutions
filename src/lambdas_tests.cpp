#include "lambdas.hpp"

//std headers
#include <iostream> //std::cout, std::endl

void lambdas::tests::test_print_student_with_best_score()
{
    std::cout << "Testing \"student with best score\"... " << std::endl;
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

    std::cout << std::endl;
}

void lambdas::tests::test_sort_seasons_by_temperatures()
{
    std::cout << "Testing temperature based season sorting... " << std::endl;

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

    std::cout << std::endl;
}

void lambdas::tests::test_math_game()
{
    std::cout << "Testing maths game... " << std::endl;

    math_game();

    std::cout << std::endl;
}