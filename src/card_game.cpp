#include "card_game.hpp"

//std headers
#include <iostream>
#include <array>
#include <algorithm>

char card_game::get_rank_char( CardRank r)
{
    if(r >= RANK_2 && r <= RANK_9)
    {
        return '0' + (r + (2 - RANK_2));
    }
    else if(r < NUM_RANKS)
    {
        switch(r)
        {
            case RANK_10:
                return 'T';
                break;

            case RANK_JACK:
                return 'J';
                break;
            
            case RANK_QUEEN:
                return 'Q';
                break;
            
            case RANK_KING:
                return 'K';
                break;
            
            case RANK_ACE:
                return 'A';
                break;

            default:
                return '*';
                break;
        }
    }
    else
    {
        return '*';
    }
    
}

char card_game::get_suit_char( CardSuit s)
{
    switch(s)
    {
        case SUIT_CLUBS:
            return 'C';
            break;
    
        case SUIT_DIAMONDS:
            return 'D';
            break;
    
        case SUIT_HEARTS:
            return 'H';
            break;
        
        case SUIT_SPADES:
            return 'S';
            break;

        default:
            return '*';
            break;
    }
}

void card_game::print_card(const Card &c)
{
    std::cout << get_rank_char(c.rank) << get_suit_char(c.suit);
}

void card_game::create_deck( std::array<Card, DECK_SIZE> &deck)
{
    for(int s = 0; s < NUM_SUITS; s++)
    {
        for(int r = 0; r < NUM_RANKS; r++)
        {
            deck[s*NUM_RANKS + r] 
                = Card{ static_cast<CardRank>(r), static_cast<CardSuit>(s) };
        }
    }
}

void card_game::print_deck( const std::array<Card, DECK_SIZE> &deck)
{
    for( const Card &c : deck)
    {
        print_card(c);
        std::cout << " ";
    }
    std::cout << std::endl;
}

void card_game::shuffle_deck( std::array<Card, DECK_SIZE> &deck)
{
    std::random_shuffle(deck.begin(), deck.end());
}

int card_game::get_card_value( const Card &c)
{
    if( c.rank <= RANK_10 ) 
    {
        return c.rank + (2 - RANK_2);
    }

    switch(c.rank)
    {
        case RANK_JACK:
            [[fallthrough]];
        case RANK_QUEEN:
            [[fallthrough]];
        case RANK_KING:
            return HOUSE_VALUE;
            break;

        case RANK_ACE:
            return ACE_VALUE;
            break;

        default:
            return 0;
            break;
    }
}

card_game::Card& card_game::draw_card( std::array<Card, DECK_SIZE> &deck, int &index)
{
    return deck[index++];
}

card_game::GameResult card_game::play_simple_blackjack()
{
    int card_index{};
    int user_hand_value{};
    int dealer_hand_value{};
    std::array<Card, DECK_SIZE> deck;

    create_deck(deck);
    shuffle_deck(deck);

    //dealer takes card 1, face down.
    std::cout << "Dealer draws card. Faces it down." << std::endl;
    draw_card(deck, card_index);
    
    //dealer takes card 2
    std::cout << "Dealer draws card." << std::endl;
    dealer_hand_value += get_card_value(draw_card(deck, card_index));

    //user takes card 1
    std::cout << "User draws card." << std::endl;
    user_hand_value += get_card_value(draw_card(deck, card_index));
    std::cout << "User's score: " << user_hand_value << std::endl;

    //user takes card 2
    std::cout << "User draws card." << std::endl;
    user_hand_value += get_card_value(draw_card(deck, card_index));
    std::cout << "User's score: " << user_hand_value << std::endl;


    char user_move{};
    do
    {
        std::cout << "HIT ("<<HIT_OPTION<<") or STAND ("<<STAND_OPTION<<")?: " << std::endl;
        std::cin >> user_move;
    } while (user_move != HIT_OPTION && user_move != STAND_OPTION);

    if(user_move == HIT_OPTION)
    {
        //user takes new card
        std::cout << "User draws card." << std::endl;
        user_hand_value += get_card_value(draw_card(deck, card_index));
        std::cout << "User's score: " << user_hand_value << std::endl;

        if(user_hand_value > 21)
        {
            return RESULT_DEALER_WINS;
        }
    }

    while( dealer_hand_value < 17)
    {
        std::cout << "Dealer draws card." << std::endl;
        dealer_hand_value += get_card_value(draw_card(deck, card_index));
    }

    //game ends here. can reveal dealer's score
    std::cout << "Dealer's score: " << dealer_hand_value << std::endl;

    //dealer loses by score
    if(dealer_hand_value > 21)
    {
        return RESULT_USER_WINS;
    }

    //both below 21, whoever has more score loses. if equal then tie.
    if(dealer_hand_value > user_hand_value)
    {
        return RESULT_USER_WINS;
    }
    else if(dealer_hand_value < user_hand_value)
    {
        return RESULT_DEALER_WINS;
    }
    else
    {
        return RESULT_TIE;
    }
}