#include <stdio.h>

#include <conio.h>

int main()
{
  int n, digit, temp;
  int sum = 0;
  printf("Enter the number to check wheather to check it's a Armstrong Number:\n");
  scanf("%d", &n);
  temp = n;
  while (n != 0)
  {
    digit = n % 10;
    sum = sum + digit * digit * digit;
    n = n / 10;
  }
  if (sum == temp)
  {
    printf("This is Armstrong Number \n");
  }
  else
  {
    printf("This is not a Armstrong Number \n");
  }

  getch();
  return 0;
}