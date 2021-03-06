//
//  Card.hpp
//  poker
//
//  Created by Jacob Greenberg-Bell on 6/19/21.
//

#ifndef Card_hpp
#define Card_hpp

class Card{
public:
    Card();
    Card(int n, int s);
    
    int getNumber() const;
    int getSuit() const;
    
    bool operator==(const Card&);
    
private:
    int number;
    int suit;
};

#endif /* Card_hpp */
