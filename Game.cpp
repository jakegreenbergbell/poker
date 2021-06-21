//
//  Game.cpp
//  poker
//
//  Created by Jacob Greenberg-Bell on 6/19/21.
//

#include "Game.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

Game::Game(){
    std::cout << "running" << std::endl;
    for(int i = 0; i < 8; i++){
        players.push_back(Player());
    }
    playerCount = 8;
    
    // create random deck
    std::vector<Card> orderedDeck = {
        Card(1,1), Card(1,2), Card(1,3), Card(1,4), Card(1,5), Card(1,6), Card(1,7), Card(1,8), Card(1,9),
        Card(1,10), Card(1,11), Card(1,12), Card(1,13),
        Card(2,1), Card(2,2), Card(2,3), Card(2,4), Card(2,5), Card(2,6), Card(2,7), Card(2,8), Card(2,9),
        Card(2,10), Card(2,11), Card(2,12), Card(2,13),
        Card(3,1), Card(3,2), Card(3,3), Card(3,4), Card(3,5), Card(3,6), Card(3,7), Card(3,8), Card(3,9),
        Card(3,10), Card(3,11), Card(3,12), Card(3,13),
        Card(4,1), Card(4,2), Card(4,3), Card(4,4), Card(4,5), Card(4,6), Card(4,7), Card(4,8), Card(4,9),
        Card(4,10), Card(4,11), Card(4,12), Card(4,13)
    };
    srand(time(0)); // seed random
    // pick out a random card
    // next to do is figure out how to remove that card
    for(int i = 52; i > 0; i--){
        int spotInDeck = rand() % (i + 1);
        std::cout << orderedDeck[spotInDeck].getSuit() << orderedDeck[spotInDeck].getNumber() << std::endl;
        deck.push(orderedDeck[spotInDeck]);
    }
    

    
    
}

Game::Game(int amountOfPlayers){
    // initialize your players
    for(int i = 0; i < amountOfPlayers; i++){
        players.push_back(Player());
    }
    playerCount = amountOfPlayers;
    
    // create random deck
}

void Game::dealCards(){
    for(int i = 0; i < playerCount; i ++){
        players[i].dealHand(getTopCard(), getTopCard());
    }
}

void Game::showCards(){
    
}

Card Game::getTopCard(){
    Card returner = deck.top();
    deck.pop();
    return returner;
}
