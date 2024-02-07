#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

Asunto::~Asunto()
{
    //dekstruktori
}

void Asunto::maarita(int asukasMaara, int neliot)
{
    cout << "Asunto maaritetty, asukkaita = " << asukasMaara << " , nelioita = " << neliot << endl;
    this->asukasMaara = asukasMaara;
    this->neliot = neliot;
}

double Asunto::laskeKulutus(double hinta)
{
    double kulutus = hinta * asukasMaara * neliot;
    cout << "Asunnon kulutus kun hinta = " << hinta << ", on = " << kulutus << endl;
    return kulutus;
}
