#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

using namespace std;
/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

istream & operator >> (istream & StrWej, LZespolona & Arg);
ostream& operator << (ostream& StrWyj, LZespolona Arg);
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator % (LZespolona  Skl1,  LZespolona  Skl2);
void wyswietl(LZespolona Arg);
bool wczytaj(LZespolona &Arg);
bool operator == (LZespolona Skl1, LZespolona Skl2);


double modul(LZespolona Arg);


#endif
