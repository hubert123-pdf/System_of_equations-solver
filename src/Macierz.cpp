#include "Macierz.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
  void Macierz::setMac(int index,int index1,int index2,int index3,double wartosc, double wartosc2,double wartosc3)
   {
     Macierz[index][index1]=wartosc;
     Macierz[index][index2]=wartosc2;
     Macierz[index][index3]=wartosc3;
   }

 std::istream& operator >> (std::istream &Strm, Macierz &Mac)
{

  double x,x2,x3;
  for(int i=0;i<ROZMIAR;i++)
  {
       Strm>>x>>x2>>x3;
       Mac.setMac(i,0,1,2,x,x2,x3);
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