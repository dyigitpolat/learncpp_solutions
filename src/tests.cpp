#include "tests.hpp"

//std headers
#include <iostream>

//user headers
#include "utilities.hpp"
#include "card_game.hpp"

void tests::test_utilities()
{
    utilities::tests::test_swap();
    utilities::tests::test_print_c_str();
}

void tests::test_card_game()
{
    card_game::tests::test_print_game_card();
    card_game::tests::test_deck();
    card_game::tests::test_simple_blackjack();
}
