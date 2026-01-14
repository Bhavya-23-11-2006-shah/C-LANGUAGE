#include <stdio.h>
#include <conio.h>
int main()
{
  int n, digit;
  printf("Enter the number you want to reverse:\n");
  scanf("%d", &n);
  printf("the reverse Number is \n");
  int rev = 0;
  while (n != 0)
  {
    digit = n % 10;
    rev = (rev * 10) + digit;
    n = n / 10;
  }
  printf("%d", rev);
  getch();
  return 0;
}