#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH



#include "LZespolona.hh"

using namespace std;
/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel, Op_modulo };



/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct WyrazenieZesp {
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};
  


/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 */
 

ostream& operator << (ostream& StrWyj, WyrazenieZesp WyrZ);
LZespolona Oblicz(WyrazenieZesp  WyrZ);
void wpiszznak(WyrazenieZesp WyrZ);
char zwrocznak(WyrazenieZesp WyrZ);

#endif
