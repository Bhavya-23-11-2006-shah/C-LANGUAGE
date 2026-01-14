#include <stdio.h> // Header file
// #include <math.h>  // Header file
#include <conio.h> // Header file
int main()
{                                 // main way to start the code
  int base, power, ans = 1;       // declareing the variable
  printf("Enter the base \t \n"); // taking base from the user
  scanf("%d", &base);
  printf("Enter the power of a number \t \n"); // taking power from the user
  scanf("%d", &power);
  for (int i = 1; i <= power; i++) // without math.h header file
  {
    ans = ans * base;
  }

  // ans = pow(base, power);                                                    // using math header file we using power function
  printf("The Base %d and the Power %d combime come= %d", base, power, ans); // here we come to an answer
  getch();
  return 0;
}