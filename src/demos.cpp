#include "demos.hpp"

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

void demos::demo_utilities()
{
    DemoMenu menu("UTILITIES");
    menu.add_menu_item({utilities::demos::demo_swap, "Swap"});
    menu.add_menu_item({utilities::demos::demo_print_c_str, "Print C-Style String"});
    menu.add_menu_item({utilities::demos::demo_sum_to, "Sum-To"});
    menu.add_menu_item({utilities::demos::demo_minmax, "Min-Max"});
    menu.add_menu_item({utilities::demos::demo_int_pair, "Int Pair"});
    menu.add_menu_item({utilities::demos::demo_point3d, "Point 3D"});
    menu.add_menu_item({utilities::demos::demo_stack, "Stack"});
    menu.show();
}

void demos::demo_card_game()
{
    DemoMenu menu("CARD GAME");
    menu.add_menu_item({card_game::demos::demo_print_game_card, "Print Game Card"});
    menu.add_menu_item({card_game::demos::demo_deck, "Deck"});
    menu.add_menu_item({card_game::demos::demo_simple_blackjack, "Play Simple Blackjack"});
    menu.show();
}

void demos::demo_misc()
{
    DemoMenu menu("MISC");
    menu.add_menu_item({misc::demos::demo_employee, "Employee"});
    menu.add_menu_item({misc::demos::demo_ball, "Ball"});
    menu.add_menu_item({misc::demos::demo_rgba, "RGBA"});
    menu.show();
}

void demos::demo_calculator()
{
    DemoMenu menu("CALCULATOR");
    menu.add_menu_item({calculator::demos::demo_calculator, "Calculator"});
    menu.show();
}

void demos::demo_recursion()
{
    DemoMenu menu("RECURSION");
    menu.add_menu_item({recursion::demos::demo_factorial, "Factorial"});
    menu.add_menu_item({recursion::demos::demo_sum_of_digits, "Sum of Digits"});
    menu.add_menu_item({recursion::demos::demo_print_binary_representation, "Binary Representation"});
    menu.show();
}

void demos::demo_lambdas()
{
    DemoMenu menu("LAMBDAS");
    menu.add_menu_item({lambdas::demos::demo_print_student_with_best_score, "Student With Best Score"});
    menu.add_menu_item({lambdas::demos::demo_sort_seasons_by_temperatures, "Sort Seasons By Temperatures"});
    menu.add_menu_item({lambdas::demos::demo_math_game, "Math Game"});
    menu.show();
}

void demos::demo_binary_search()
{
    DemoMenu menu("BINARY SEARCH");
    menu.add_menu_item({binary_search::demos::demo_find, "Binary Search"});
    menu.show();
}