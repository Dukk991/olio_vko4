#ifndef KERROS_H
#define KERROS_H

#include <iostream>
#include "asunto.h"
#include "katutaso.h"

using namespace std;

class Kerros : public Asunto
{
private:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;

public:
    Kerros();
    ~Kerros();
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);
};

#endif //KERROS.H
