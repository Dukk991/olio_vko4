#include "kerrostalo.h"
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"

#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Lopuksi maaritetaan koko kerostalon kaikki asunnot" << endl;

    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    //destruktori
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kulutus = eka.laskeKulutus(hinta) + toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta);
    cout << "Koko kerrostalon kulutus kun hinta = " << hinta << ", on = " << kulutus << endl;
    return kulutus;
}
