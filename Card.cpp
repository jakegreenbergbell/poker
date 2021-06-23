//
//  Card.cpp
//  poker
//
//  Created by Jacob Greenberg-Bell on 6/19/21.
//

#include "Card.hpp"

// random card
Card::Card(){
    
}

// card with suit and number
Card::Card(int n, int s){
    number = n;
    suit = s;
}

int Card::getNumber() const{
    return number;
}

int Card::getSuit() const{
    return suit;
}

bool Card::operator==(const Card& other){
    return (suit == other.getSuit() && number == other.getNumber());
}

