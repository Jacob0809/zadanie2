#include "WyrazenieZesp.hh"

LZespolona Oblicz (WyrazenieZesp WyrZ)
{
    LZespolona wyn;
    switch(WyrZ.Op){
    case Op_Dodaj:
        return operator + (WyrZ.Arg1, WyrZ.Arg2);
        break;
    case Op_Odejmij:
        return operator - (WyrZ.Arg1, WyrZ.Arg2);
    case Op_Mnoz:
        return operator * (WyrZ.Arg1, WyrZ.Arg2);
    case Op_Dziel:
        return operator / (WyrZ.Arg1, WyrZ.Arg2);                     
    }
    return wyn;
}

Operator Wczytaj2 (char operatort)
{
  Operator oper;
  switch (operatort){
  case '+':
    oper = Op_Dodaj;
    break;

  case '-':
    oper = Op_Odejmij;
    break;

  case '*':
    oper = Op_Mnoz;
    break;

  case '/':
    oper = Op_Dziel;
  }
  return oper;
}

//void Wyswietl