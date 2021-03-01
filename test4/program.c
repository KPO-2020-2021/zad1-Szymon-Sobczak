#include <stdio.h>


double Dodaj(double, double ); /* W c++ niedopuszczalne jest niezadeklarowanie typow dla argumentow, ktore ma przyjac funckja, test wykonany na Diablo*/


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
