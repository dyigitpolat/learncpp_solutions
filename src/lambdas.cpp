#include "lambdas.hpp"

//std headers
#include <algorithm> //std::max_element, std::min_element, std::for_each, std::find
#include <iostream> //std::cout, std::endl
#include <vector> //std::vector
#include <numeric> //std::iota
#include <random> //std::rand
#include <chrono> //std::chrono

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

void lambdas::math_game()
{
    int i_0{};
    int n{};

    std::cout << "Enter a number to start at: ";
    std::cin >> i_0;
    std::cout << std::endl;

    std::cout << "Enter how many numbers you want: ";
    std::cin >> n;
    std::cout << std::endl;

    
    // obtain a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::srand(seed);
    std::rand();
    int random_num{ std::rand() % 3 + 2 }; // between 2 and 4
    
    std::vector<int> nums(n);
    std::iota(nums.begin(), nums.end(), i_0);

    std::for_each(nums.begin(), nums.end(), [=](int &i){ i = i * i * random_num; } );

    std::cout 
        << "I generated " << n << " square numbers. "
        << "Find all of them multiplied by " << random_num
        << std::endl;


    bool is_game_ended{};
    int user_input{};
    do
    {
        std::cout << "> ";
        std::cin >> user_input;

        auto iter = std::find(nums.begin(), nums.end(), user_input);
        if(iter != nums.end())
        {
            nums.erase(iter);
            std::cout 
                << "Good! " << nums.size() << " numbers left... "
                << std::endl;
        }
        else
        {
            std::cout 
            << "Maybe..."
            << *std::min_element( nums.begin(), nums.end(), 
                [=](int a, int b){ return std::abs(a - user_input) < std::abs(b - user_input); } )
            << "?" << std::endl;
            nums.clear();
        }

        is_game_ended = (nums.size() == 0);
    } while (!is_game_ended);
    
}