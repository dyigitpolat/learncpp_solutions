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
#include "demo_menu.hpp"

void tests::test_utilities()
{
    DemoMenu menu("UTILITIES");
    menu.add_menu_item({utilities::tests::test_swap, "Swap"});
    menu.add_menu_item({utilities::tests::test_print_c_str, "Print C-Style String"});
    menu.add_menu_item({utilities::tests::test_sum_to, "Sum-To"});
    menu.add_menu_item({utilities::tests::test_minmax, "Min-Max"});
    menu.add_menu_item({utilities::tests::test_int_pair, "Int Pair"});
    menu.add_menu_item({utilities::tests::test_point3d, "Point 3D"});
    menu.add_menu_item({utilities::tests::test_stack, "Stack"});
    menu.show();
}

void tests::test_card_game()
{
    DemoMenu menu("CARD GAME");
    menu.add_menu_item({card_game::tests::test_print_game_card, "Print Game Card"});
    menu.add_menu_item({card_game::tests::test_deck, "Deck"});
    menu.add_menu_item({card_game::tests::test_simple_blackjack, "Play Simple Blackjack"});
    menu.show();
}

void tests::test_misc()
{
    DemoMenu menu("MISC");
    menu.add_menu_item({misc::tests::test_print_employee_name, "Print Employee Name"});
    menu.show();
}

void tests::test_calculator()
{
    DemoMenu menu("CALCULATOR");
    menu.add_menu_item({calculator::tests::test_calculator, "Calculator"});
    menu.show();
}

void tests::test_recursion()
{
    DemoMenu menu("RECURSION");
    menu.add_menu_item({recursion::tests::test_factorial, "Factorial"});
    menu.add_menu_item({recursion::tests::test_sum_of_digits, "Sum of Digits"});
    menu.add_menu_item({recursion::tests::test_print_binary_representation, "Binary Representation"});
    menu.show();
}

void tests::test_lambdas()
{
    DemoMenu menu("LAMBDAS");
    menu.add_menu_item({lambdas::tests::test_print_student_with_best_score, "Student With Best Score"});
    menu.add_menu_item({lambdas::tests::test_sort_seasons_by_temperatures, "Sort Seasons By Temperatures"});
    menu.add_menu_item({lambdas::tests::test_math_game, "Math Game"});
    menu.show();
}

void tests::test_binary_search()
{
    DemoMenu menu("BINARY SEARCH");
    menu.add_menu_item({binary_search::tests::test_find, "Binary Search"});
    menu.show();
}