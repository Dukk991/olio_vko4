#include "kerros.h"
#include "katutaso.h"
#include "asunto.h"
#include <iostream>

using namespace std;

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
    as1 = Asunto();
    as2 = Asunto();
    as3 = Asunto();
    as4 = Asunto();
}

Kerros::~Kerros()
{
    //destruktori
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);

    cout << "Kerros maaritetty, asukkaita = 8, nelioita = 400" << endl;
}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + as3.laskeKulutus(hinta) + as4.laskeKulutus(hinta);
    cout << "Kerroksen kulutus kun hinta = " << hinta << ", on = " << kulutus << endl;
    return kulutus;

}
