#include <iostream>
#include "Adres.h"
#include "Data.h"
#include "Praca.h"

using namespace std;

Praca::Praca()
{
    nazwa_firmy="nieznanaSPZOO";
}

Praca::Praca(string n, Adres a, Data d)
{
    nazwa_firmy=n;
    adres_firmy=a;
    data_zatrudnienia=d;
}
    string Praca::get_nazwa_firmy() { return nazwa_firmy; }
    Adres Praca::get_adres_firmy() { return adres_firmy; }
    Data Praca::get_data_zatrudnienia() { return data_zatrudnienia; }
