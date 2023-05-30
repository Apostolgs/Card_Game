#include "card.h"

// TODO: Implement here the methods of SimpleCard and SpecialCard

//*********************************************************************************


SimpleCard::SimpleCard(int value, CardSuit suit) : Card() {
    this->value = value;
    this->suit = suit;
}

int SimpleCard::getPoints(){
    int points = 0;
    switch(value){
        case 5 : points = 5; break;
        case 10 : points = 10; break;
        case 13 : points = 10; break;
    }
    return points;
}

bool SimpleCard::canBeInCombination(){
    return true;   //ολες οι καρτες απο 2-ασσος μπορουν να συμετεχουν σε ολους τους συνδιασμους
}

bool SimpleCard::canBeInBomb(){
    return true;   //ολες οι καρτες απο 2-ασσος μπορουν να συμετεχουν σε βομβα Four of a kind ή Straight Flush
}


//************************************************************************************



SpecialCard::SpecialCard(CardSuit suit) : Card() {
    this->suit = suit;
    switch(suit){
        case DRAGON : this->value = 15; break;
        case PHOENIX : this->value = -1; break;
        case DOG : this->value = -1; break;
        case MAHJONG : this->value = 1; break;
    }
}

int SpecialCard::getPoints(){
    int points = 0;
    switch(suit){
        case DRAGON : points = 25; break;
        case PHOENIX : points = -25; break;
        case DOG : points = 0; break;
        case MAHJONG : points = 0; break;
    }
    return points;
}

bool SpecialCard::canBeInBomb(){
    return false;
}

bool SpecialCard::canBeInCombination(){
    switch(suit){
        case DRAGON : return false;
        case DOG : return false;
        case PHOENIX : return true;
        case MAHJONG : return true;
    }
}









