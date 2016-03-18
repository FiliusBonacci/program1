#include <iostream>
#include <string>
#include "Data.h"
#include "Adres.h"

using namespace std;

class Osoba
{
    string imie;
    Data data_urodzenia;
    Adres adres_zamieszkania;


public:
    Osoba();
    Osoba(string, Data, Adres);

    string get_imie();
    Data get_data_urodzenia();
    Adres get_adres_zamieszkania();
};


