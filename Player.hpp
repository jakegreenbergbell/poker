//
//  Player.hpp
//  poker
//
//  Created by Jacob Greenberg-Bell on 6/19/21.
//

#ifndef Player_hpp
#define Player_hpp

#include "Card.hpp"
#include <vector>

class Player{
public:
    Player();
    void dealHand(Card card1, Card card2);
    int getHand();
    Card getFirstCard() const;
    Card getSecondCard() const;
    
private:
    std::vector<Card> hand;
    
};

#endif /* Player_hpp */
