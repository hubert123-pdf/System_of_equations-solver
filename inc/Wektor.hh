#ifndef WEKTOR_HH
#define WEKTOR_HH

#include <iostream>
#include "rozmiar.h"


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Wektor {
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */

double skladowe[ROZMIAR];
  public:
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */ 
   
   void setSkladowa(unsigned int index, double wartosc) 
   {
     skladowe[index]=wartosc;
   }  
   double getSkladowa(unsigned int index)const
   {
     return skladowe[index];
   }
   
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream& operator >> (std::istream &Strm, Wektor &Wek);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);

/*przeciazenia operatorow wyrazen arytmetycznych*/
Wektor operator+(Wektor Wek1,Wektor Wek2);
Wektor operator-(Wektor Wek1,Wektor Wek2);
Wektor operator*(Wektor Wek1,double Wek2);
double operator*(Wektor Wek1,Wektor Wek2);
Wektor operator/(Wektor Wek1,double Wek2);
#endif
