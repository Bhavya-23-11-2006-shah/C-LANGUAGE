#include <stdio.h>
#include <conio.h>
int main()
{
  int i, j, n;
  printf("Enter the number you want to make the pattern of :\t ");
  scanf("%d", &n);
  printf("\n");
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= (n + 1) - i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf(" ");
  getch(); 
  return 0;
}