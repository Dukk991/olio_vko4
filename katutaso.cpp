#include "katutaso.h"
#include "asunto.h"
#include <iostream>

using namespace std;

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
    as1 = Asunto();
    as2 = Asunto();
}

Katutaso::~Katutaso()
{
    //desktruktori
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutaosn asuntoja" << endl;

    as1.maarita(2, 100);
    as2.maarita(2, 100);

    cout << "Katutaso maaritetty, asukkaita = 4, nelioita = 200" << endl;

}

double Katutaso::laskeKulutus(double hinta)
{

    double kulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta);
    cout << "Katutason kulutus kun hinta = " << hinta << ", on = " << kulutus << endl;
    return kulutus;
}

