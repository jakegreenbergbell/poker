//
//  Game.cpp
//  poker
//
//  Created by Jacob Greenberg-Bell on 6/19/21.
//

#include "Game.hpp"
#include "Card.hpp"
#include "Constants.h"
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
    createDeck();
}

Game::Game(int amountOfPlayers){
    // initialize your players
    for(int i = 0; i < amountOfPlayers; i++){
        players.push_back(Player());
    }
    playerCount = amountOfPlayers;
    createDeck();
}

void Game::dealCards(){
    for(int i = 0; i < playerCount; i ++){
        players[i].dealHand(getTopCard(), getTopCard());
    }
}

void Game::flop(){
    communal.push_back(getTopCard());
    communal.push_back(getTopCard());
    communal.push_back(getTopCard());
}

void Game::turn(){
    communal.push_back(getTopCard());
}

void Game::river(){
    communal.push_back(getTopCard());
}

void Game::showHands() const{
    for(int i = 0; i < playerCount; i ++){
        std::cout << "player " << i << ": " << players[i].getFirstCard().getSuit() << "/" << players[i].getFirstCard().getNumber() << " and "
        << players[i].getSecondCard().getSuit() << "/" << players[i].getSecondCard().getNumber() << std::endl;
    }
}

void Game::showCommunal() const{
    for(int i = 0; i < communal.size(); i ++){
        std::cout << "communal " << i << ": " << communal[i].getSuit() << "/" << communal[i].getNumber() << std::endl;
    }
}

void Game::createDeck(){
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
    srand(time(0) * 1.0); // seed random
    // pick out a random card
    for(int i = 51; i >= 0; i--){
        int spotInDeck = rand() % (i + 1);
        Card chosenCard = orderedDeck[spotInDeck];
        deck.push(chosenCard); // add picked card to top of deck
        // remove card from ordered deck
        for(std::vector<Card>::iterator it = orderedDeck.begin(); it != orderedDeck.end(); ){
            if(*it == chosenCard) it = orderedDeck.erase(it);
            else it++;
        }
    }
}

Card Game::getTopCard(){
    Card returner = deck.top();
    deck.pop();
    return returner;
}
