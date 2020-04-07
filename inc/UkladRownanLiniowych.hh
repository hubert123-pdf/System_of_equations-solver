#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include "rozmiar.h"
#include <iostream>
#include "Macierz.hh"
#include "Wektor.hh"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class UkladRownanLiniowych {
     
  Wektor Wyniki;
  Wektor Wyrazy_wolne;
  Macierz Macierz1;

  public:
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */
       
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << ( std::ostream&Strm, const UkladRownanLiniowych&UklRown);
#endif
