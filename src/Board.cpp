//
// Created by miriam on 07/12/22.
//

#include "Board.h"

Board::Board() {}

void Board::attach(Observer * o){
    observers.push_back( o );
}
void Board::detach(Observer * o){
    observers.remove( o );
}
void Board::notify() const {
    for(auto o : observers) {
        o->update();
    }
}