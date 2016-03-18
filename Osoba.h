#include <iostream>
#include <string>
#include "Data.h"
#include "Adres.h"
#include "Praca.h"

using namespace std;

class Osoba
{
    string imie;
    string nazwisko;
    Data data_urodzenia;
    Adres adres_zamieszkania;
    Praca zatrudnienie;


public:
    Osoba();
    Osoba(string, string, Data, Adres, Praca);

    string get_imie();
    string get_nazwisko();
    Data get_data_urodzenia();
    Adres get_adres_zamieszkania();
    Praca get_zatrudnienie();
    void przedstaw();
};


