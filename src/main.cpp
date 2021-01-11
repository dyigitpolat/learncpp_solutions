#include <iostream>

//std headers
#include <iostream> //std::cout, std::endl

//user headers
#include "tests.hpp"
#include "demo_menu.hpp"

int main()
{
    //----------------------------------------------------//
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << "-         Welcome!        -" << std::endl;
    std::cout << "  Test Program Entry Point " << std::endl;
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    //----------------------------------------------------//

    DemoMenu main_menu("MAIN MENU");
    main_menu.add_menu_item({tests::test_utilities, "Utilities"});
    main_menu.add_menu_item({tests::test_misc, "Misc"});
    main_menu.add_menu_item({tests::test_recursion, "Recursion"});
    main_menu.add_menu_item({tests::test_lambdas, "Lambdas"});
    main_menu.add_menu_item({tests::test_card_game, "Card Game"});
    main_menu.add_menu_item({tests::test_calculator, "Calculator"});
    main_menu.add_menu_item({tests::test_binary_search, "Binary Search"});
    main_menu.show();

    return 0;
}