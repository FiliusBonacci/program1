#include <iostream>
#include <string>
#include "Data.h"
#include "Adres.h"
#include "Praca.h"
#include "Osoba.h"

using namespace std;

Osoba::Osoba()
{
   // cout<<"***dziala konstr klasy Osoba bez arg***" <<endl;
    imie = "Gal";
    nazwisko = "Anonim";
}

Osoba::Osoba(string im, string naz, Data du, Adres az, Praca zatr)
{
   // cout<<"***dziala konstr klasy Osoba z arg***" <<endl;
    imie=im;
    nazwisko=naz;
    data_urodzenia=du;
    adres_zamieszkania=az;
    zatrudnienie=zatr;
}

string Osoba::get_imie() { return imie; }
string Osoba::get_nazwisko() { return nazwisko; }
Data Osoba::get_data_urodzenia() {return data_urodzenia; }
Adres Osoba::get_adres_zamieszkania() { return adres_zamieszkania; }
Praca Osoba::get_zatrudnienie() { return zatrudnienie; }

void Osoba::przedstaw()
{
    cout<<"\n------------------------------------------------\n\t";
    cout<<imie<<" "<<nazwisko<<"\nurodzony:\t"<<get_data_urodzenia().get_dzien()<<"."<<get_data_urodzenia().get_miesiac()<<"."<<get_data_urodzenia().get_rok();
    cout<<"\nzamieszkaly: \t" <<get_adres_zamieszkania().get_ulica()<<" "<< get_adres_zamieszkania().get_nr_domu()<<"/"<<get_adres_zamieszkania().get_nr_mieszkania()<<"\n \t\t"<<get_adres_zamieszkania().get_kod() << " " <<get_adres_zamieszkania().get_miasto() <<"\n\t\t"<<get_adres_zamieszkania().get_panstwo()<<"\nzatrudniony w:\n\t\t" << get_zatrudnienie().get_nazwa_firmy()<<endl;
    cout<<"\t\t"<<get_zatrudnienie().get_adres_firmy().get_ulica()<<" "<<get_zatrudnienie().get_adres_firmy().get_nr_domu()<<endl;
    cout<<"\t\t"<<get_zatrudnienie().get_adres_firmy().get_kod()<<" "<<get_zatrudnienie().get_adres_firmy().get_miasto()<<endl;
    cout<<"od:\t\t"<<get_zatrudnienie().get_data_zatrudnienia().get_dzien()<<"."<<get_zatrudnienie().get_data_zatrudnienia().get_miesiac()<<"."<<get_zatrudnienie().get_data_zatrudnienia().get_rok()<<endl;
    cout<<"------------------------------------------------\n\n";
}
