#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"

#include <iostream>

class Kerrostalo
{
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;

public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);
};

#endif //KERROSTALO.H
