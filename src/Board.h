//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_BOARD_H
#define AGENDAPROGRAMMAZIONE_BOARD_H

#include <vector>
#include <list>
#include <fstream>
#include <memory>
#include "Subject.h"
#include "Observer.h"

class Board : public Subject{
public:
    Board();
    virtual void attach(Observer * o) override;
    virtual void detach(Observer * o) override;
    virtual void notify() const override;
private:
    std::list < Observer* > observers;
};


#endif //AGENDAPROGRAMMAZIONE_BOARD_H
