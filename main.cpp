#include <iostream>
#include "Adres.h"
#include "Data.h"
#include "Osoba.h"


using namespace std;

int main()
{


    Osoba o1;
    cout << o1.get_imie() <<" " << o1.get_data_urodzenia().get_rok() <<endl;
 //   cout <<"Zamieszkaly: " <<o1.get_adres_zamieszkania().get_miasto()<<", " <<o1.get_adres_zamieszkania().get_ulica()<<o1.get_adres_zamieszkania().get_nr_domu()<<"/"o1.get_adres_zamieszkania().get_nr_mieszkania()<<endl;

    Data dzisiaj(18,3,2016);
    //domyslny adres
    Adres a1;
    //jakis adres a2
    Adres a2("Polska", "Warszawa", "Kwiatowa", "02-200", 4, 5);

    Osoba o2("Adam", dzisiaj, a1);
    cout << o2.get_imie()<<" urodzony: "<<o2.get_data_urodzenia().get_rok()<<endl;
    cout << o2.get_adres_zamieszkania().get_miasto() << " ul. " << o2.get_adres_zamieszkania().get_ulica()<<" "<<o2.get_adres_zamieszkania().get_nr_domu()<<"/"<<o2.get_adres_zamieszkania().get_nr_mieszkania()<<endl;

    cout << endl <<endl;

    Osoba o3("Zbyszek", dzisiaj, a2);
    cout << o3.get_imie()<<" urodzony: "<<o3.get_data_urodzenia().get_rok()<<endl;
    cout << o3.get_adres_zamieszkania().get_miasto() << " ul. " << o3.get_adres_zamieszkania().get_ulica()<<" "<<o3.get_adres_zamieszkania().get_nr_domu()<<"/"<<o3.get_adres_zamieszkania().get_nr_mieszkania()<<endl;


    return 0;
}
