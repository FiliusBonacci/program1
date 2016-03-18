#pragma once

class Data
{
    int dzien;
    int miesiac;
    int rok;


public:
    Data();
    Data(int dz, int m, int r);

    int get_dzien();
    int get_miesiac();
    int get_rok();
};
