#pragma once

#include <array>

namespace card_game {
    enum CardRank
    {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,
        RANK_QUEEN,
        RANK_KING,
        RANK_ACE,

        NUM_RANKS
    };

    enum CardSuit
    {
        SUIT_CLUBS,
        SUIT_DIAMONDS,
        SUIT_HEARTS,
        SUIT_SPADES,

        NUM_SUITS
    };

    enum GameResult
    {
        RESULT_USER_WINS,
        RESULT_DEALER_WINS,
        RESULT_TIE
    };

    struct Card
    {
        CardRank rank;
        CardSuit suit;
    };

    constexpr int DECK_SIZE = 52;

    constexpr int HOUSE_VALUE = 10;
    constexpr int ACE_VALUE = 11;

    constexpr char HIT_OPTION = 'h';
    constexpr char STAND_OPTION = 's';

    char get_rank_char( CardRank r);
    char get_suit_char( CardSuit s);
    void print_card( const Card &c);
    int get_card_value( const Card &c);

    void create_deck( std::array<Card, DECK_SIZE> &c);
    void print_deck( const std::array<Card, DECK_SIZE> &deck);
    void shuffle_deck( std::array<Card, DECK_SIZE> &deck);
    Card& draw_card( std::array<Card, DECK_SIZE> &deck, int &index);
    
    GameResult play_simple_blackjack();

    namespace tests
    {
        void test_print_game_card();
        void test_deck();
        void test_simple_blackjack();
    }
}