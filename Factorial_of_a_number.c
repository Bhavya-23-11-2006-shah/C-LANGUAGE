#include <stdio.h>
#include <conio.h>
int main()
{
  int x, i, c = 1;
  printf("Enter the Number For the Factorial : \n ");
  scanf("%d", &x);
  printf("The Factorial is : ");
  for (i = 1; i <= x; i++)
  {
    c = c * i;
    printf(" %d ", c);
  }

  getch();
}