#include <stdio.h>

#include <conio.h>

int main()
{
  int n, digit, sum;
  digit = 0;
  printf("Enter the sum of number:\t ");
  scanf("%d", &n);
  while (n != 0)
  {

    sum = n % 10;
    digit = digit + sum;
    n = n / 10;
  }
  printf("The sums of number is =%d", digit);

  getch();
}