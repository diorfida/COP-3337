#ifndef DECKOFCARD_H
#define DECKOFCARD_H

// things to inculde for random function
#include <cstdlib>
#include <ctime>

#include "Card.h"

class DeckOfCard
{
    private:
        std::vector<Card> deck; // stores all of our cards
        int currentCard; // keeps track of which card we are dealing
    
    public:
        DeckOfCard(); // default constructor

        void shuffle(); // shuffles the order of the cards
        Card dealCard(); // selects a card from the deck and increments the current card integer
        bool moreCards() const; // checks if there are any more cards in the deck to deal
};

#endif