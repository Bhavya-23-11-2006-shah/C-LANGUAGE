#include <stdio.h>
#include <conio.h>
int main()
{
  int n, digit, rev, temp;
  printf("Enter the number to check wheather it is a palindrome number or not:\t");
  scanf("%d", &n);
  temp = n;
  rev = 0;
  while (n != 0)
  {
    digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
  }
  if (rev == temp)
  {
    printf("\nThis is palindrome number ");
  }
  else
  {
    printf("This not a plindrome number ");
  }
  getch();
  return 0;
}