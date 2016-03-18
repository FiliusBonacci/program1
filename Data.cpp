
#include <iostream>
#include "Data.h"

using namespace std;
// definicja konstruktora bez argumentow
Data::Data()
{
    //cout << "*** dziala konstruktor klasy data bez argumentow.*** \n";

    dzien = 1;
    miesiac = 1;
    rok = 1900;

}

// definicja konstruktora z argumentami                   lista inicjalizacyjna

Data::Data(int dz, int m, int r):dzien(dz),miesiac(m),rok(r)
{
    //cout << "*** dziala konstruktor klasy data z argumentami.*** \n";
}

// typ, pochodzenia, klasa

int Data::get_dzien(){return dzien;}

int Data::get_miesiac(){return miesiac;}

int Data::get_rok(){return rok;}

