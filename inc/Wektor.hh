#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>


/*
  klasa wektor jako podstawa budowy Macierzy
  oraz wektoru wyrazow szukanych i wynikow
 */
class Wektor {
  /*
      Wektor jako tablica 3 elementow dobule 
   */
   double skladowe[ROZMIAR];
  public:
  /*
      metody umozliwiające dostęp do danych klasy
   */ 
   void setSkladowa(unsigned int index, double wartosc) 
   {
     skladowe[index]=wartosc;
   }  
   double getSkladowa(unsigned int index)const
   {return skladowe[index];}
   
};


/*
   operator wczytywania Wektora na strumien wejsciowy 
   kazdemu miejscu w tablicy przypisywana jest wartosc
 */
std::istream& operator >> (std::istream &Strm, Wektor &Wek);

/*
   operator wypisyania Wektora na strumien wyjsciowy
 */
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);
//operator dodawania Wektorów
Wektor operator+(Wektor Wek1,Wektor Wek2);
//operator dodawania Wektorów
Wektor operator-(Wektor Wek1,Wektor Wek2);
//operator mnożenia Wektorów wektorowo
Wektor operator*(Wektor Wek1,double Wek2);
//operator dodawania Wektorów skalarnie
double operator*(Wektor Wek1,Wektor Wek2);
//operator dzielenia Wektorów
Wektor operator/(Wektor Wek1,double Wek2);
Wektor iloczynWektorowy( Wektor Wek1,Wektor Wek2);
git #endif
