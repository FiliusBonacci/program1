#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Adres.h"
#include "Data.h"
#include "Osoba.h"
#include "Praca.h"


using namespace std;



int main()
{
    //--------------------------------------
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    /*cout << (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << endl <<endl;*/

    //--------------------------------------


  //  Osoba o1;
   // cout << o1.get_imie() <<" " << o1.get_data_urodzenia().get_rok() <<endl;
 //   cout <<"Zamieszkaly: " <<o1.get_adres_zamieszkania().get_miasto()<<", " <<o1.get_adres_zamieszkania().get_ulica()<<o1.get_adres_zamieszkania().get_nr_domu()<<"/"o1.get_adres_zamieszkania().get_nr_mieszkania()<<endl;

    //----- daty ---------------------------------------------
    Data dzisiaj(now->tm_mday, (now->tm_mon + 1) , (now->tm_year + 1900));
    Data d1(3,4,1988);
    Data d2(6,12,1990);
    Data d3(5,5,2013);
    Data d4(6,7,2011);

    //----- adresy ---------------------------------------------
    Adres a1;
    Adres a2("Polska", "Warszawa", "Kwiatowa", "02-200", 4, 5);
    Adres a3("Polska", "Gdansk", "Narutowicza", "32-500", 11, 15);
    Adres a4("Polska", "Wroclaw", "Armii Krajowej", "77-660", 1, 1);

    //----------------------------------------------------------

    //------- Praca --------------------------------------------
    Praca f1("Hortex", a3, dzisiaj);
    Praca f2("Biedronka", a4, d4);


    //------- osoby --------------------------------------------
    Osoba o1;
    Osoba o2("Adam","Nowak", d1, a2, f1);
    Osoba o3("Piotr", "Szumka", d2, a3, f2);

    //-----------
    Osoba *wsk;
    wsk = &o2;
    wsk -> przedstaw();
    //-----------
    wsk = &o3;
    wsk -> przedstaw();
    //-----------


    //----------------------------------------------------------



 /*   cout << o2.get_imie()<<" urodzony: "<<o2.get_data_urodzenia().get_rok()<<endl;
    cout << o2.get_adres_zamieszkania().get_miasto() << " ul. " << o2.get_adres_zamieszkania().get_ulica()<<" "<<o2.get_adres_zamieszkania().get_nr_domu()<<"/"<<o2.get_adres_zamieszkania().get_nr_mieszkania()<<endl;

    cout << endl <<endl;

    Osoba o3("Zbyszek","ooopp", dzisiaj, a2, f2);
    cout << o3.get_imie()<<" urodzony: "<<o3.get_data_urodzenia().get_rok()<<endl;
    cout << o3.get_adres_zamieszkania().get_miasto() << " ul. " << o3.get_adres_zamieszkania().get_ulica()<<" "<<o3.get_adres_zamieszkania().get_nr_domu()<<"/"<<o3.get_adres_zamieszkania().get_nr_mieszkania()<<endl;
*/

    return 0;
}
