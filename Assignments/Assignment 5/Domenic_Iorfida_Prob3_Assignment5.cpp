#include <iostream>

#include "DeckOfCard.h"

int main()
{
    DeckOfCard myDeckOfCards;
    //print the content of the deck
    while(myDeckOfCards.moreCards())
    {
        std::cout << myDeckOfCards.dealCard().toString() << std::endl;
    }

    myDeckOfCards.shuffle(); // place Cards in random order
    std::cout << "**********AFTER SHUFFLING**********" << std::endl;

    //print the content of the deck
    while(myDeckOfCards.moreCards())
    {
        std::cout << myDeckOfCards.dealCard().toString() << std::endl;
    }

    return 0;
}