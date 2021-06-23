//
//  Constants.cpp
//  poker
//
//  Created by Jacob Greenberg-Bell on 6/19/21.
//

#include <stdio.h>

enum suits {
    DIAMONDS = 1,
    HEARTS = 2,
    CLUBS = 3,
    SPADES = 4
};

enum cardNums {
    ONE = 1, // 0001
    TWO = 2, // 0010
    THREE = 3, // 0011
    FOUR = 4, // etc.
    FIVE = 5,
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    JACK = 11,
    QUEEN = 12,
    KING = 13,
    ACE = 14
};

enum hands {
    HIGHCARD = 1,
    PAIR = 2,
    TWOPAIR = 4,
    THREEOFAKIND = 8,
    STRAIGHT = 16,
    FLUSH = 32,
    FULLHOUSE = 64,
    FOUROFAKIND = 128,
    STRAIGHTFLUSH = 256,
    ROYALFLUSH = 512
};

// card will be three bits for suit 000 and then 4 bits for card number 0000
