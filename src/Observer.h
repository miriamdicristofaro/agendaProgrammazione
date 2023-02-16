//
// Created by miriam on 16/02/23.
//

#ifndef AGENDAPROGRAMMAZIONE_OBSERVER_H
#define AGENDAPROGRAMMAZIONE_OBSERVER_H

class Observer{
public:
    virtual void update() = 0;

//protected:
    virtual ~Observer() { };

};

#endif //AGENDAPROGRAMMAZIONE_OBSERVER_H
