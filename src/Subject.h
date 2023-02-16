//
// Created by miriam on 16/02/23.
//

#ifndef AGENDAPROGRAMMAZIONE_SUBJECT_H
#define AGENDAPROGRAMMAZIONE_SUBJECT_H

#include "Observer.h"
#ifndef SRC_SUBJECT_H_
#define SRC_SUBJECT_H_

class Subject{
public:
    virtual void attach(Observer * o) = 0;
    virtual void detach(Observer * o) = 0;
    virtual void notify() const  = 0;

//protected:
    virtual ~Subject() { };

};
#endif

#endif //AGENDAPROGRAMMAZIONE_SUBJECT_H
