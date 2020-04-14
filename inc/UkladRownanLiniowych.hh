#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "Macierz.hh"
#include <math.h>
//uklad rownan skladajacy sie z 2 wektorow i jednej macierzy
class UkladRownanLiniowych {
     
  Wektor Wyniki; 
  Macierz Macierz1;
  Wektor Rozwiazanie;

  public:
  //konstruktor klasy
  UkladRownanLiniowych(Macierz Macierz2,Wektor Wyniki2)
  {
    Wyniki=Wyniki2;
    Macierz1=Macierz2;
  }
  /*
  funkcje umozliwiajace dostep do odpowiednich elemetnow klasy
 */
  Wektor getwyniki()const
  {
    return Wyniki;
  }
  Macierz getMacierz()const
  {
    return Macierz1;
  }
  Wektor getRozwiazanie()const
  {
    return Rozwiazanie;
  }
 /*
 funkcje zmieniajce elementy klasy
 */
  void setMacierz(int kolumna, int wiersz, double wartosc)
  {
    Macierz1.setMac(kolumna,wiersz,wartosc);
  }
  void setWektor(int wiersz, double wartosc)
  {
    Rozwiazanie.setSkladowa(wiersz,wartosc);
  }
  
  
  //funkcja wyznaczajaca niewiadome uklady rownan 
  Wektor ROZWIAZANIE(UkladRownanLiniowych U);
  //funkcja liczaca bład obliczen
  void Epsilon(); 
};

/*operator wyswietlajacy macierz transponowana 
oraz wektor wyrazow wolnych */
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);

//przeciazenie nierowiniete poniewaz uzyty zostal konstuktor dla klasy
std::ostream& operator << ( std::ostream&Strm, UkladRownanLiniowych&UklRown);




  /*funkcja liczaca wyznaczniki odpowiednich elementow 
  w oparciu o wzory Cramera*/
  double Wyznacznikx1(UkladRownanLiniowych U);
  double Wyznacznikx2(UkladRownanLiniowych U);
  double Wyznacznikx3(UkladRownanLiniowych U);
/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << ( std::ostream&Strm, const UkladRownanLiniowych&UklRown);
#endif
