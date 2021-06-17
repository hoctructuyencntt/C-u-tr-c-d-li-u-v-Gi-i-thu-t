#include <stdio.h>
void inc_by_value(int x);
void inc_by_ref(int *p);
int main()
{
   int x = 5;
   printf("x truoc khi tang: %d\n", x);
   inc_by_value(x);
   printf("x sau khi tang dung inc_by_value: %d\n", x);
   inc_by_ref(&x);
   printf("x sau khi tang dung inc_by_ref: %d", x);
   return 0;
}

void inc_by_value(int x)
{
   x = x + 1;
}

void inc_by_ref(int *p)
{
   *p = *p + 1;
}
