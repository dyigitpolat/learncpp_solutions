#include <iostream>

//std headers
#include <iostream> //std::cout, std::endl

//user headers
#include "demos.hpp"
#include "demo_menu.hpp"

int main()
{
    //----------------------------------------------------//
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << "-         Welcome!        -" << std::endl;
    std::cout << "  Demo Program Entry Point " << std::endl;
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    //----------------------------------------------------//

    DemoMenu main_menu("MAIN MENU");
    main_menu.add_menu_item({demos::demo_utilities, "Utilities"});
    main_menu.add_menu_item({demos::demo_misc, "Misc"});
    main_menu.add_menu_item({demos::demo_recursion, "Recursion"});
    main_menu.add_menu_item({demos::demo_lambdas, "Lambdas"});
    main_menu.add_menu_item({demos::demo_card_game, "Card Game"});
    main_menu.add_menu_item({demos::demo_calculator, "Calculator"});
    main_menu.add_menu_item({demos::demo_binary_search, "Binary Search"});
    main_menu.show();

    return 0;
}