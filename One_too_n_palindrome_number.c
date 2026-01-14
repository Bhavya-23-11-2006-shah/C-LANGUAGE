#include <stdio.h>

#include <conio.h>

int main()
{
  int n, digit, sum;
  printf("Enter the number from 1 to n number you want :\t");
  scanf("%d", &n);
  printf("\n The number in between the palindrome number where serch is  1 - %d number \n", n);
  for (int i = 1; i <= n; i++)
  {
    int temp = i;
    sum = 0;
    while (temp != 0)
    {
      digit = temp % 10;
      sum = sum * 10 + digit;
      temp = temp / 10;
    }
    if (i == sum)
    {
      printf("This is a palindrome number : \t %d \n", i);
    }
  }
  getch();
  return 0;
}