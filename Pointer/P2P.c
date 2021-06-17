#include <stdio.h>
int main()
{
   int x = 5;
   int *p = &x;
   printf("Dia chi x: %p\n", p);

   int **q = &p;
   printf("Dia chi p: %d\n", *q);

   printf("Gia tri x hay *p: %d", **q);
   return 0;
}
