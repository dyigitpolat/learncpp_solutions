#include <iostream>

//std headers
#include <iostream> //std::cout, std::endl

//user headers
#include "tests.hpp"

int main()
{
    //----------------------------------------------------//
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << "-         Welcome!        -" << std::endl;
    std::cout << "  Test Program Entry Point " << std::endl;
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << "- - - - - - - - - - - - - -" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    //----------------------------------------------------//

    tests::test_utilities();
    
    tests::test_binary_search();
    tests::test_lambdas();
    tests::test_recursion();
    tests::test_calculator();
    tests::test_misc();
    tests::test_card_game();

    return 0;
}