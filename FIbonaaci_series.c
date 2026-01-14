#include <stdio.h>

int main()
{
  int a = -1, b = 1, c, x;
  printf("Enter the range of number you want to print in fibonnaci series: \n");
  scanf("%d", &x);
  printf("The range of fibonnaci series is :");
  for (int i = 0; i < x; i++)
  {
    c = a + b;
    a = b;
    b = c;
    printf("%d ", c);
  }

  return 0;
}