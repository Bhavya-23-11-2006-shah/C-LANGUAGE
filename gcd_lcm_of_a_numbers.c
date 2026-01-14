#include <stdio.h>
#include <conio.h>
int gcd(int x, int y)
{
  while (y != 0)
  {
    int temp = y;
    y = x % y;
    x = temp;
  }
  return x;
}
int main()
{
  int a, b, lcm;
  printf("Enter 2 positive numberss \n *GCD of a Number \n *LCM of a Number:\n\t");
  scanf("%d %d", &a, &b);
  if (a <= 0 || b <= 0)
  {
    printf("Invaild Input");
    return 1;
  }
  else
  {
    lcm = (a * b) / gcd(a, b);
    printf("The answer of this 2 number iss For GCD iss: %d\n ", gcd(a, b));
    printf("The answer of this 2 number iss For LCM iss: %d ", lcm);
  }
  getch();
  return 0;
}