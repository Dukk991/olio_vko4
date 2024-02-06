#include "asunto.h"
#include <iostream>

using namespace std;

int main()
{
    Asunto asunto;

    asunto.maarita(2, 100);
    double hinta = 1;
    cout << "Asunnon kulutus kun hinta = " << hinta << ", on = " << asunto.laskeKulutus(hinta) << endl;
}
