#include "Macierz.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
  void Macierz::setMacierz(int index,int index1,int index2,int index3,double wartosc, double wartosc2,double wartosc3)
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
       Mac.setMacierz(i,0,1,2,x,x2,x3);
  }
  return Strm;
}
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)
{
    for(int i=0;i<ROZMIAR;i++)
    {
        for(int j=0;j<ROZMIAR;j++){
        Strm<<Mac.getMacierz(i,j)<<' ';}
        Strm<<std::endl;
    }
    return Strm;
}
