#include <stdio.h>

#include <conio.h>

int main()
{
  int n, sum, digit, temp, i;
  printf("Enter the Armstrong Number you want to print starting from 1 till the number you want:");
  scanf("%d", &n);
  printf("the Armstrong Number you want to print starting from 1 - %d is :\n", n);
  for (i = 1; i <= n; i++)
  {
    temp = i;
    sum = 0;
    while (temp != 0)
    {
      digit = temp % 10;
      sum = sum + (digit * digit * digit);
      temp = temp / 10;
    }
    if (sum == i)
      printf("This is a Armstrong Number: %d\t \n", sum);
  }

  getch();
  return 0;
}