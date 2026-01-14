#include <stdio.h>
#include <math.h>
int main()
{
  float r1, r2, a, b, c, d;
  printf("Enter 3 number to find the root of a quadratic equation\n");
  scanf("%f %f %f", &a, &b, &c);
  if (a == 0)
  {
    printf("This case should be invaild!!!!");
    return 1;
  }
  printf("The Quadratic Equation is %.fx^2+%.fx+%.f", a, b, c);
  d = b * b - 4 * a * c;
  if (d > 0)
  {
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);
    printf("\n roots are real and different.\n");
    printf("The answer are \n %f \n %f", r1, r2);
  }
  else if (d == 0)
  {
    r1 = -b / (2 * a);
    printf("\n Root are real and equal");
    printf("\n The answer is %f", r1);
  }
  else
  {
    printf("\n it is an imaginary number");
  }

  return 0;
}