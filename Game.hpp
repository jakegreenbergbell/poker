//
//  Game.hpp
//  poker
//
//  Created by Jacob Greenberg-Bell on 6/19/21.
//

#ifndef Game_hpp
#define Game_hpp

#include "Card.hpp"
#include "Player.hpp"
#include <list>
#include <vector>
#include <stack>
#include <stdio.h>
#include <stdlib.h>

class Game{
public:
    Game();
    Game(int players);
    
    // communal card functions
    void dealCards();
    void flop();
    void turn();
    void river();
    Card getTopCard();
    
    // useful functions
    Player findWinner();
    void createDeck();
    void showHands() const;
    void showCommunal() const;
    
private:
    std::stack<Card> deck;
    std::vector<Card> communal;
    // why vector? players won't need to be removed and added frequently, but will need to be accessed quickly
    // this means run time is optimized
    std::vector<Player> players;
    
    int playerCount;
};


#endif /* Game_hpp */
