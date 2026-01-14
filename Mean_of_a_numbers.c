#include <stdio.h>
#include <conio.h>
int main()
{
  int i, n, j;
  float sum = 0.0;
  float mean;
  printf("Enter the number you want to find the mean off :");
  scanf("%d", &n);
  if (n <= 0)
  {
    printf("This can't be possible please try again !!!");
    return 0;
  }
  printf("Enter the numbers of %d inputs for the following process to find out the mean :", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &j);
    sum += j;
  }
  mean = sum / n;
  printf("The mean of this %d n variable is this %f", n, mean);
  getch();
}