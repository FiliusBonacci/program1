#include <iostream>
#include <string>
#include "Data.h"
#include "Adres.h"
#include "Osoba.h"

using namespace std;

Osoba::Osoba()
{
   // cout<<"***dziala konstr klasy Osoba bez arg***" <<endl;
    imie = "Gal";
}

Osoba::Osoba(string im, Data du, Adres az)
{
   // cout<<"***dziala konstr klasy Osoba z arg***" <<endl;
    imie=im;
    data_urodzenia=du;
    adres_zamieszkania=az;
}

string Osoba::get_imie() { return imie; }
Data Osoba::get_data_urodzenia() {return data_urodzenia; }
Adres Osoba::get_adres_zamieszkania() { return adres_zamieszkania; }
