#include <iostream>
#include <cmath>
#include <unistd.h>
#include "LZespolona.hh"
#include "BazaTestu.hh"
#include "WyrazenieZesp.hh"


using namespace std;
  



int main(int argc, char **argv)
{

  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  LZespolona Odpowiedz;
  LZespolona wynik;
  double iloscPyt = 0;
  double dobreOdp = 0;
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
   cout << endl;
        cout << "Podaj wynik operacji: " << WyrZ_PytanieTestowe;


        cout << endl;
        cout << "Podaj wynik: ";
        cin >> Odpowiedz;

        wynik = Oblicz(WyrZ_PytanieTestowe);
  }

 if(Odpowiedz == wynik)
        {
            cout << "To jest poprawna odpowiedz!" << endl;
            dobreOdp ++;
        }
        else
        {
            cout << "Blad. Poprawny wynik to " << wynik << endl;
        }

        iloscPyt ++;
        
  

  cout << endl;
  cout << " Koniec testu" << endl;
  
  cout << endl;
  cout << "Ilosc dobrych odpowiedzi" << dobreOdp << "/" << iloscPyt <<endl;
  cout << endl;







}
