#include "Macierz.hh"


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
    std::cout<<std::endl;
    return Strm;
}
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)
{
    for(int i=0;i<ROZMIAR;i++)
    {
        for(int j=0;j<ROZMIAR;j++)
        Strm<<Mac.getMac(i,j)<<' ';
        Strm<<std::endl;
    }
    Strm<<std::endl;
    return Strm;
}
double Macierz::znajdzWyznacznik()
{
  //wykorzystujac eliminacje gaussa
  double wyznacznik,A1,B2,C2,B3,C3;
  A1=getMac(0,0);
  B2=getMac(1,1)-getMac(1,0)/getMac(0,0)*getMac(0,1);
  C2=getMac(1,2)-getMac(1,0)/getMac(0,0)*getMac(0,2);
  B3=getMac(2,1)-getMac(2,0)/getMac(0,0)*getMac(0,1);
  C3=getMac(2,2)-getMac(2,0)/getMac(0,0)*getMac(0,2);
  wyznacznik=A1*((B2*C3)-(B3*C2));
  return wyznacznik;
} 
 void Macierz::Transponowana()
 {
     Macierz Trans;
     double a1=getMac(0,0);
     double b1=getMac(0,1);
     double c1=getMac(0,2);
     double a2=getMac(1,0);
     double b2=getMac(1,1);
     double c2=getMac(1,2);
     double a3=getMac(2,0);
     double b3=getMac(2,1);
     double c3=getMac(2,2);
     Trans.setMac(0,0,a1);
     Trans.setMac(0,1,a2);
     Trans.setMac(0,2,a3);
     Trans.setMac(1,0,b1);
     Trans.setMac(1,1,b2);
     Trans.setMac(1,2,b3);
     Trans.setMac(2,0,c1);
     Trans.setMac(2,1,c2);
     Trans.setMac(2,2,c3);
     std::cout<<Trans;
 }