#include <stdio.h>
#include <conio.h>
int main()
{
  int n;
  printf("Enter a number for a loop: \t");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j <= i)
      {
        printf("%d", j);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  getch();
  return 0;
}