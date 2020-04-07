#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */

/*std::cout<<"Poprawny zapis macierzy 3x3: "<<
std::endl" liczba liczba liczba potwierdz"<<
std::endl" liczba liczba liczba potwierdz"<<
std::endl" liczba liczba liczba potwierdz"<<;*/
int main()
{
 // UkladRownanLiniowych   UklRown;
  Wektor Wek1, Wek2;    //inicjalizacja wektorow
  cin>>Wek1;
  cin>>Wek2;
  cout<<iloczynWektorowy(Wek1,Wek2); //wywolanie funkcji

  Macierz Mac; //inicjalizacja Macierzy
  cin>>Mac;
  cout<<Mac;
  kwadrat(Mac); //wywołanie funkcji
  cout<<Mac;
}
