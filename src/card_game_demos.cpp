#include "card_game.hpp"

//std headers
#include <iostream> //std::cout, std::endl
#include <array> //std::array

void card_game::demos::demo_print_game_card()
{
    Card c1{RANK_ACE, SUIT_SPADES};
    Card c2{RANK_2, SUIT_HEARTS};

    std::cout << "Printing Ace of Spades: " << std::endl;
    print_card(c1);
    std::cout << std::endl;

    std::cout << "Printing 2 of Hearts: " << std::endl;
    print_card(c2);
    std::cout << std::endl;
}

void card_game::demos::demo_deck()
{
    std::array<Card, DECK_SIZE> deck;

    std::cout << "Creating deck... " << std::endl;
    create_deck(deck);

    std::cout << "Printing deck... " << std::endl;
    print_deck(deck);

    std::cout << "Printing card values of the first 13 cards... " << std::endl;
    for( int i = 0; i < 13; ++i)
    {
        print_card(deck[i]);
        std::cout << " " << get_card_value(deck[i]) << std::endl;
    }

    std::cout << "Shuffling deck... " << std::endl;
    shuffle_deck(deck);

    std::cout << "Printing deck after shuffle... " << std::endl;
    print_deck(deck);
}


void card_game::demos::demo_simple_blackjack()
{
    char option_play_again{};

    do
    {
        GameResult result = play_simple_blackjack();

        switch( result)
        {
            case RESULT_DEALER_WINS:
                std::cout << "Dealer wins." << std::endl;
                break;

            case RESULT_USER_WINS:
                std::cout << "User wins." << std::endl;
                break;  

            case RESULT_TIE:
                std::cout << "Tie." << std::endl;
                break;

            default:
                std::cout << "Unknown error. " << std::endl;
                break;
        }

        std::cout << "Play again? (yes: y, quit otherwise): " << std::endl;
        std::cin >> option_play_again;
    } while (option_play_again == 'y');
}