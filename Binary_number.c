#include <stdio.h>
#include <conio.h>
int main()
{
  for (int i = 65; i <= 122; i++)
  {
    printf("%d =\t %c  ", i, i);
    printf("\n");
  }
  getch();
  return 0;
}