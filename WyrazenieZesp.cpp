#include "WyrazenieZesp.hh"
#include <iostream>
using namespace std;

LZespolona Oblicz (WyrazenieZesp WyrZ)
{
    LZespolona wynik;
    switch(WyrZ.Op){
    case Op_Dodaj:
        return operator + (WyrZ.Arg1, WyrZ.Arg2);
        break;
    case Op_Odejmij:
        return operator - (WyrZ.Arg1, WyrZ.Arg2);
        break;
    case Op_Mnoz:
        return operator * (WyrZ.Arg1, WyrZ.Arg2);
        break;
    case Op_Dziel:
        return operator / (WyrZ.Arg1, WyrZ.Arg2); 
        break;  
    case Op_modulo:
        return operator % (WyrZ.Arg1, WyrZ.Arg2);
        break;                        
    }
    return wynik;
}

void wpiszznak(WyrazenieZesp WyrZ)
{
  switch (WyrZ.Op){
  case Op_Dodaj:
    cout << "+";
    break;

  case Op_Odejmij:
    cout << "-";
    break;

  case Op_Mnoz:
    cout << "*";
    break;

  case Op_Dziel:
    cout << "/";
    break;
  case Op_modulo:
    cout << "%";
    break;
  }
}

char zwrocznak(WyrazenieZesp WyrZ)
{
  char znak;
  switch (WyrZ.Op)
  {
  case Op_Dodaj:
  znak = '+';
  break;
  case Op_Odejmij:
  znak = '-';
  break;
  case Op_Mnoz:
  znak = '*';
  break;
  case Op_Dziel:
  znak = '/';
  break;
  case Op_modulo:
  znak = '%';
  break;
  
    
  }
  return znak;
}

ostream& operator << (ostream& StrWyj, WyrazenieZesp WyrZ)
{
  cout << WyrZ.Arg1; 
  wpiszznak(WyrZ); 
  cout << WyrZ.Arg2;
  return StrWyj;
}


