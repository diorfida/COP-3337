#include "DeckOfCard.h"

// load all possible cards into the deck (52)
DeckOfCard::DeckOfCard()
{
    for(int s = 0; s < 4; s++)
    {
        for(int f = 0; f < 13; f++)
        {
            deck.push_back(Card(f, s));
        }
    }
    currentCard = 0;
}

// shuffles the order of the cards by swapping the current card with a randomly selected one
void DeckOfCard::shuffle()
{
    srand(time(0)); // seed the random number generator
    currentCard = 0; // reset the card dealing count

    for(int i = 0; i < deck.size(); i++)
    {
        int randCard = rand() % deck.size(); // choose a random card

        // swap procedure
        Card temp = deck[i];
        deck[i] = deck[randCard];
        deck[randCard] = temp;
    }
}

// selects a card from the deck and increments the current card integer
Card DeckOfCard::dealCard()
{
    Card temp = deck[currentCard];
    currentCard++;
    return temp;
}

// checks if there are any more cards in the deck to deal
bool DeckOfCard::moreCards() const
{
    if(currentCard < deck.size())
        return true;
    else
        return false;
}