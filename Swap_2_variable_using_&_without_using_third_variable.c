#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter the 2 variable which you want to swap \n");
  scanf("%d %d", &a, &b);
  printf("This are ones before swapping %d = %d \n", a, b);
  /*c = a;
  a = b;
  b = c;*/
  a = a + b;
  b = a - b;
  a = a - b;
  printf("\n \n This are ones after swapping %d = %d", a, b);
  return 0;
}