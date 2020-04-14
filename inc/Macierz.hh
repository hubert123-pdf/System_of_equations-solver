#ifndef MACIERZ_HH
#define MACIERZ_HH

#include <iostream>
#include "Wektor.hh"

// klasa macierz skladajaca sie z 3 tablic typu wektor
class Macierz {
 
   Wektor kolumny[ROZMIAR];
  public:
  /*
      metody umozliwiające dostęp do danych klasy
   */ 
   Wektor getKolumna(int index)
   {
     return kolumny[index];
   }
   double getMac(int kolumna, int wiersz)const
   {
     return kolumny[kolumna].getSkladowa(wiersz);
   }
   void setMac(int kolumna,int wiersz,double wartosc) 
  {
    kolumny[wiersz].setSkladowa(kolumna,wartosc);
  }
    double znajdzWyznacznik(); //funkcja liczaca wyznacznik danej macierzy
    //funkcja wyswietlajaca macierz transonowana
    void Transponowana();
};

/*
   operator wczytywania Macierzy na strumien wejsciowy,
   wczytanie 3 tablic sklaajacych sie z tablic 3 elemetnowych
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac);

/*
   operator wypisyania MAcierzy na strumien wyjsciowy
 */
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);
#endif
