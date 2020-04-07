#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include <iostream>
#include "Wektor.hh"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Macierz{
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
double Macierz[ROZMIAR][ROZMIAR]; //Macierz jako tablica 2 wymiarowa
  public:
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */
   void setMac(int index,int index2,double wartosc);
   double getMac(int index,int index2)const
   {
     return Macierz[index][index2];
   }

};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);

double Wyznacznik(Macierz Mac); //funkcja licząca wyznacznik;
void kwadrat(Macierz &Mac); //funkcja wyznaczająca macierz z kwadratwami poszczegónlych liczb;
#endif
