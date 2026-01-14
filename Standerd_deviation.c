#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
  int i, n, a, x;
  float num = 0.0, mean, term2;
  float term1 = 0.0, sd;
  printf("Let Do the Standered Deviation:\n");
  printf("Please tell the total number of mean you want to enter :");
  scanf("%d", &n);
  if (n <= 0)
  {
    printf("please Enter the right input !!");
    return 0;
  }

  printf("\n Enter the %d input to find Standerd Deviation:", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a);
    num += a;
  }
  mean = num / n;
  printf("\n Enter the %d input again", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &x);
    term1 += (x - mean) * (x - mean);
  }
  term2 = term1 / n;
  sd = sqrt(term2);
  printf("\nMean = %.2f", mean);
  printf("\nStandard Deviation = %.2f", sd);

  getch();
  return 0;
}