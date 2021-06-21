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

int Card::getNumber(){
    return number;
}

int Card::getSuit(){
    return suit;
}
