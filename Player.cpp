//
//  Player.cpp
//  poker
//
//  Created by Jacob Greenberg-Bell on 6/19/21.
//

#include "Player.hpp"

Player::Player(){
    hand = {Card(0, 0), Card(0, 0)};
}

void Player::dealHand(Card card1, Card card2){
    hand[0] = card1;
    hand[1] = card2;
}

Card Player::getFirstCard() const{
    return hand[0];
}

Card Player::getSecondCard() const{
    return hand[1];
}
