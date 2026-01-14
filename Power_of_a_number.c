#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c;
  printf("Enter the number of which you want to find the power:\n");
  scanf("%d", &a);
  printf("Enter the power of which you want to find out:\n");
  scanf("%d", &b);
  c = pow(a, b);
  printf("The power is :%d\n", c);
  return 0;
}