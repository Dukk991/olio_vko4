#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

void Asunto::maarita(int asukkaat, int neliot)
{
    cout << "Asunto maaritetty, asukkaita = " << asukkaat << " , nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    cout << "Asunnon kulutus, kun hinta on = 1 on " << hinta << endl;
    return hinta;
}
