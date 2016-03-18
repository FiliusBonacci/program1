#pragma once

using namespace std;

class Adres
{
    string panstwo;
    string miasto;
    string ulica;
    string kod;
    int nr_domu, nr_mieszkania;

public:
    Adres();
    Adres(string, string, string, string, int, int);

    string get_panstwo();
    string get_miasto();
    string get_ulica();
    string get_kod();
    int get_nr_domu();
    int get_nr_mieszkania();



};
