#include <stdio.h>

extern const double PI; /* Test przeprowadzony na diablo */
extern const double E;  /* Powiazanie stalych pomiedzy plikami wymaga slowa extern, aby linker poszukiwal stalych w innych modulach  */

int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
