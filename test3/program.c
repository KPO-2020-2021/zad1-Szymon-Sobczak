#include <stdio.h>

extern const double PI; /* Zamiana extern na static spowodowala blad nizainicjalizowanej zmiennej badz blad wielorotnie zainicjownaej zmiennej. Test przeprowadzony na diablo */
extern const double E;  

int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
