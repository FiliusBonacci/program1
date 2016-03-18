#include <iostream>
#include "Adres.h"

using namespace std;

Adres::Adres()
{
    panstwo="nieznane";
    miasto="brakM";
    ulica="brakU";
    kod="0";
    nr_domu=0;
    nr_mieszkania=0;
}

Adres::Adres(string p, string m, string u, string kodd, int nd, int nm)
{
    panstwo=p;
    miasto=m;
    ulica=u;
    kod=kodd;
    nr_domu=nd;
    nr_mieszkania=nm;
}
    string Adres::get_panstwo() {return panstwo;}
    string Adres::get_miasto(){return miasto;}
    string Adres::get_ulica() {return ulica;}
    string Adres::get_kod() {return kod;}
    int Adres::get_nr_domu() {return nr_domu;}
    int Adres::get_nr_mieszkania() {return nr_mieszkania;}
