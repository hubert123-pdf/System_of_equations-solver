#include "Wektor.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Wektor, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
std::istream& operator >> (std::istream &Strm, Wektor &Wek)
{
    double x;
    for(int i=0; i<ROZMIAR;i++)
    {
          Strm>>x;  Wek.setSkladowa(i,x);
    }
    return Strm;
}
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek)
{
    for(int i=0;i<ROZMIAR;i++)
    {
        Strm<<"Wartosc "<<i+1<<" skladowej= ";
        Strm<<Wek.getSkladowa(i)<<'\t';
    }
    return Strm;
}
Wektor operator+(Wektor Wek1,Wektor Wek2)
{
    Wektor wynik;
    for (int i=0;i<ROZMIAR;i++)
    {
        wynik.setSkladowa(i,Wek1.getSkladowa(i)+Wek2.getSkladowa(i));
    }
    return wynik;
}
Wektor operator-(Wektor Wek1,Wektor Wek2)
{
    Wektor wynik;
    for (int i=0;i<ROZMIAR;i++)
    {
        wynik.setSkladowa(i,Wek1.getSkladowa(i)-Wek2.getSkladowa(i));
    }
    return wynik;
}
double operator*(Wektor Wek1,Wektor Wek2)
{
    double wynik;
    Wektor wynik2;
    for(int i=0;i<ROZMIAR;i++)
    {
    wynik2.setSkladowa(i,Wek1.getSkladowa(i)*Wek2.getSkladowa(i));
    wynik+=wynik2.getSkladowa(i);
    }
    return wynik;
}
Wektor operator*(Wektor Wek1,double Wek2)
{
    Wektor wynik;
    for(int i=0;i<ROZMIAR;i++)
    {
     wynik.setSkladowa(i,Wek1.getSkladowa(i)*Wek2);   
    }
    return wynik;
}
Wektor operator/(Wektor Wek1,double Wek2)
{
    Wektor wynik;
    for(int i=0;i<ROZMIAR;i++)
    {
     wynik.setSkladowa(i,Wek1.getSkladowa(i)/Wek2);   
    }
    return wynik;
}
