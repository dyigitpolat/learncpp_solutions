#include "lambdas.hpp"

//std headers
#include <algorithm> //std::max_element
#include <iostream> //std::cout, std::endl

void lambdas::print_student_with_best_score( const std::array<Student, 8> &arr)
{
    auto compare_score = [](const Student &s1, const Student &s2)
        {
            return s1.score < s2.score;
        };
    
    std::cout 
        << std::max_element(arr.begin(), arr.end(), compare_score)->name 
        << " is the best student."
        << std::endl;
}


void lambdas::sort_seasons_by_temperatures( std::array<Season, 4> &arr)
{
    std::sort(arr.begin(), arr.end(), [](const auto &s1, const auto &s2) -> bool
        {
            return s1.average_temperature < s2.average_temperature;
        });
}