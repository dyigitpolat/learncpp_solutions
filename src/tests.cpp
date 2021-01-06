#include "tests.hpp"

//std headers
#include <iostream>

//user headers
#include "utilities.hpp"
#include "card_game.hpp"
#include "misc.hpp"
#include "calculator.hpp"
#include "recursion.hpp"

void tests::test_utilities()
{
    utilities::tests::test_swap();
    utilities::tests::test_print_c_str();
    utilities::tests::test_sum_to();
    utilities::tests::test_minmax();
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