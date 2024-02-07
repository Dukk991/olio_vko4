#ifndef KATUTASO_H
#define KATUTASO_H

#include <iostream>
#include "asunto.h"

using namespace std;

class Katutaso : public Asunto
{
private:
    Asunto as1;
    Asunto as2;

public:
    Katutaso();
    ~Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif //KATUTASO.H
