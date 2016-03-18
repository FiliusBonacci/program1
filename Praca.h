#pragma once

#include "Adres.h"
#include "Data.h"

using namespace std;


class Praca
{
    string nazwa_firmy;
    Adres adres_firmy;
    Data data_zatrudnienia;


public:
    Praca();
    Praca(string, Adres, Data);

    string get_nazwa_firmy();
    Adres get_adres_firmy();
    Data get_data_zatrudnienia();
};
