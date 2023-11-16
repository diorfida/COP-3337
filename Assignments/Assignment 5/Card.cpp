#include "Card.h"

// define the static members
std::vector<std::string> Card::faceNames = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
std::vector<std::string> Card::suitNames = {"Hearts", "Diamonds", "Clubs", "Spades"};

// constructor
Card::Card(int _face, int _suit)
{
    face = _face;
    suit = _suit;
}

// accessor methods 

int Card::getFace() const
{
    return face;
}

int Card::getSuit() const
{
    return suit;
}

// prints "Face of Suit"
std::string Card::toString() const
{
    return faceNames[face] + " of " + suitNames[suit];
}