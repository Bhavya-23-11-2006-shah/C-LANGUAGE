#include <stdio.h>

int main()
{
  int k = 0, a, b;

  int setta[50], settb[50], unio[100];

  printf("Enter number of elements in Set A:\t");
  scanf("%d", &a);
  printf("please input the first set A :\n");
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &setta[i]);
  }
  printf("Enter number of elements in Set B:\t");
  scanf("%d", &b);
  printf("please input the first set B : \t");
  for (int i = 0; i < b; i++)
  {
    scanf("%d", &settb[i]);
  }

  return 0;
}