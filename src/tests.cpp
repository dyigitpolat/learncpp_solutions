#include "tests.hpp"

//std headers
#include <iostream> //std::cout, std::endl

//user headers
#include "utilities.hpp"
#include "card_game.hpp"
#include "misc.hpp"
#include "calculator.hpp"
#include "recursion.hpp"
#include "lambdas.hpp"
#include "binary_search.hpp"

void tests::test_utilities()
{
    utilities::tests::test_swap();
    utilities::tests::test_print_c_str();
    utilities::tests::test_sum_to();
    utilities::tests::test_minmax();
    utilities::tests::test_int_pair();
}

void tests::test_card_game()
{
    card_game::tests::test_print_game_card();
    card_game::tests::test_deck();
    card_game::tests::test_simple_blackjack();
}

void tests::test_misc()
{
    misc::tests::test_print_employee_name();
}

void tests::test_calculator()
{
    calculator::tests::test_calculator();
}

void tests::test_recursion()
{
    recursion::tests::test_factorial();
    recursion::tests::test_sum_of_digits();
    recursion::tests::test_print_binary_representation();
}

void tests::test_lambdas()
{
    lambdas::tests::test_print_student_with_best_score();
    lambdas::tests::test_sort_seasons_by_temperatures();
    lambdas::tests::test_math_game();
}

void tests::test_binary_search()
{
    binary_search::tests::test_find();
}