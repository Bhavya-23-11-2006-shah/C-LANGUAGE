#include <stdio.h>

int main()
{
  int n, j, i;
  printf("Enter the Number to finf the oposite and revere right angle triangle : \t");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if (j >= (n + 1) - i)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  printf(" ");
  return 0;
}