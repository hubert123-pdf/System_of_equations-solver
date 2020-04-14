#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

/*Poprawny zapis macierzy 3x3: 
liczba liczba liczba potwierdz"
liczba liczba liczba potwierdz"
liczba liczba liczba potwierdz";*/
int main()
{
//inicjalizacje klas
Macierz Mac;
Wektor wektorWynikowy; 


cout<<endl<<"Wypelnij Macierz wyrazow wolnych:"<<endl;
cin>>Mac;
cout<<"Wypelnij wektor wynikow układu rownan"<<endl;
cin>>wektorWynikowy;
UkladRownanLiniowych URL(Mac,wektorWynikowy); //inicjalizacja klasy uklad rownwan

cout<<URL;
if(URL.getMacierz().znajdzWyznacznik()==0)
cout<<"Wyznacznik rowny zero brak rozwiazan "<<endl;
else
{
cout<<"Wyznacznik Macierzy:";
cout<<URL.getMacierz().znajdzWyznacznik()<<endl;
cout<<"Wektor rozwiazan (x1,x2,x3)"<<endl;
cout<<URL.ROZWIAZANIE(URL)<<endl;
URL.Epsilon();
}
  return 0;
}
