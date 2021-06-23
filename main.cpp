//
//  main.cpp
//  poker
//
//  Created by Jacob Greenberg-Bell on 6/19/21.
//

/*
 
 GENERAL CLASS STRUCTURE:
            Game
          /     \
       Cards     Players
                /
             Cards
 
 WHAT GAME WILL DO:
    1. Allow you to simulate poker game with 2 - 8 players.
    2. Calculate best hand each player has at any given point. And know when winner occurs.
    3. Calculate odds of winning.
 
 POTENTIAL ADD ONS:
    1. Add betting, keeping track of players chip count, pot size, big blind, small blind, etc.
 
 */

#include <iostream>
#include "Card.hpp"
#include "Game.hpp"

int main() {
    Game play = Game();
    play.dealCards();
    play.showHands();
    play.flop();
    play.turn();
    play.river();
    play.showCommunal();
    return 0;
}
