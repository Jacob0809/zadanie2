#include "LZespolona.hh"
#include<iostream>
#include<cmath>
using namespace std;

void wyswietl(LZespolona Arg)
{
  cout<<"("<<Arg.re<<showpos<<Arg.im<<"i)"<<noshowpos;
}

bool wczytaj(LZespolona &Arg)
{
  char tmp;
  cin>>tmp;
  if(tmp!='(')
    {
     return false;
    }
  double re;
  double im;


  cin>>re;
  cin>>im;
  cin>>tmp;
  if(tmp=='i')
    {
      Arg.re=re;
      Arg.im=im;
    }
  else
    {
      return false;
    }
  cin>>tmp;
  if(tmp!=')')
    {
      return false;
    }

  return true;
  
} 

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  wynik;

  wynik.re = Skl1.re + Skl2.re;
  wynik.im = Skl1.im + Skl2.im;
  return wynik;
}

LZespolona operator - (LZespolona Skl1, LZespolona Skl2)
{
  LZespolona wynik;
  wynik.re = Skl1.re - Skl2.re;
  wynik.im = Skl1.im - Skl2.im;
  return wynik;

}

double modul(LZespolona liczba)
{
  double wynik;
  wynik = sqrt(pow(liczba.re , 2) + pow(liczba.im , 2));
  return wynik;
}

LZespolona sprzezenie(LZespolona liczba)
{
  
  liczba.im = liczba.im * (-1);
  return liczba;
}

LZespolona operator * (LZespolona Skl1, LZespolona Skl2)
{
  LZespolona wynik;
  wynik.re= (Skl1.re * Skl2.re)-(Skl1.im * Skl2.im);
  wynik.im= (Skl1.re * Skl2.re)+(Skl1.im * Skl2.im);
  return wynik;
}

LZespolona operator / (LZespolona Skl1, LZespolona Skl2)
{
  LZespolona wynik;
  wynik= operator * (Skl1, sprzezenie(Skl2));
  wynik.re = wynik.re / pow(modul(Skl2) , 2);
  wynik.im = wynik.im / pow(modul(Skl2), 2);
  return wynik;
}

LZespolona operator % (LZespolona Skl1, LZespolona Skl2)
{
  LZespolona wynik;
  int are1, aim1, are2, aim2;
  int wartosc1, wartosc2;
  are1= static_cast<int>(Skl1.re);
  are2= static_cast<int>(Skl2.re); 
  aim1= static_cast<int>(Skl1.im); 
  aim2= static_cast<int>(Skl2.im);

  wartosc1 = are1 % are2;
  wartosc2 = aim1 % aim2;
  
  wynik.re= static_cast<double> (wartosc1);
  wynik.im= static_cast<double> (wartosc2);

  return wynik;
}

ostream& operator << (ostream& StrWyj, LZespolona & Arg)
{
  StrWyj << "(" << Arg.re;
  if(Arg.im>=0)
  {
    cout<< '+';
  }
  cout << Arg.im << "i)";
  return StrWyj;
}

istream & operator >> (istream & StrWej, LZespolona & Arg)
{
   char tmp;
   
  
  
  cin>>tmp;
  if(tmp!='(')
    {
     
     cin.clear();
     cin.ignore(1024, '\n');
     
    }
  double re;
  double im;


  cin>>re;
  cin>>im;
  cin>>tmp;
  if(tmp=='i')
    {
      Arg.re=re;
      Arg.im=im;
    }
  else
    {
      
      cin.clear();
      cin.ignore(1024, '\n');
      
    }
  cin>>tmp;
  if(tmp!=')')
    {
      
      cin.clear();
      cin.ignore(1024, '\n');
      
      

    }
    
    
    
  

  return StrWej;

}

bool operator == (LZespolona Skl1, LZespolona Skl2)
{
    if(Skl1.re == Skl2.re && Skl1.im == Skl2.im)
    {   
    return true;
    }
    else
    {
      return false;
    }
    
                                                   
}