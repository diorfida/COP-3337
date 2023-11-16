#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>

class Card
{
    private:
        int face, suit; // location of the face and suit in the vector
        static std::vector<std::string> faceNames; // reference the face int to this vector
        static std::vector<std::string> suitNames; // reference the suit int to this vector

    public:
        Card(int _face, int _suit); // constructor

        // accessor functions
        int getFace() const;
        int getSuit() const;

        // prints "Face of Suit"
        std::string toString() const;
};

#endif