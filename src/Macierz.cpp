#include "Macierz.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
  void Macierz::setMac(int index,int index2,double wartosc)
   {
     Macierz[index][index2]=wartosc;
   }

 std::istream& operator >> (std::istream &Strm, Macierz &Mac)
{

  double x;
  for(int i=0;i<ROZMIAR;i++)
  {
    for(int j=0;j<ROZMIAR;j++)
    {
       Strm>>x;
       Mac.setMac(i,j,x);
    }
  }
  return Strm;
}
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)
{
    for(int i=0;i<ROZMIAR;i++)
    {
        for(int j=0;j<ROZMIAR;j++){
        Strm<<Mac.getMac(i,j)<<' ';}
        Strm<<std::endl;
    }
    return Strm;
}
double Wyznacznik(Macierz Mac)
{
  double wyznacznik,A1,B2,C2,B3,C3;
  A1=Mac.getMac(1,1);
  B2=Mac.getMac(2,2)-Mac.getMac(2,1)/Mac.getMac(1,1)*Mac.getMac(1,2);
  C2=Mac.getMac(2,3)-Mac.getMac(2,1)/Mac.getMac(1,1)*Mac.getMac(1,3);
  B3=Mac.getMac(3,2)-Mac.getMac(3,1)/Mac.getMac(1,1)*Mac.getMac(1,2);
  C3=Mac.getMac(3,3)-Mac.getMac(3,1)/Mac.getMac(1,1)*Mac.getMac(1,3);
  wyznacznik=A1*((B2*C3)-(B3*C2));
  return wyznacznik;
}
void kwadrat(Macierz &Mac)
{
  double wartosc;
  for(int i=0; i<ROZMIAR;i++)
  {
    for(int j=0;j<ROZMIAR;j++)
    {
      wartosc=Mac.getMac(i,j)*Mac.getMac(i,j);
      Mac.setMac(i,j,wartosc); //przypisanie wartosci
    }
  }
  
}