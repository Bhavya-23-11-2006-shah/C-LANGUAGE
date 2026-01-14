#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int g, b, r;
  int tb;
  int tril;
  int gc = 0, rc = 0, bc = 0;
  int i, pk;
  printf("Enter the colour of red ball :\n");
  scanf("%d", &r);
  printf("Enter the colour of green ball :\n");
  scanf("%d", &g);
  printf("Enter the colour of blue ball :\n");
  scanf("%d", &b);
  tb = r + b + g;
  if (tb == 0)
  {
    printf("\n         WARNING          \n");
    printf("\n PLEASE ENTER THE CORRECT INPUT \n");
  }
  printf("Enter the number of trail you want to play:\n");
  scanf("%d", &tril);
  if (tril == 0)
  {
    printf("\n         WARNING          \n");
    printf("\n PLEASE ENTER THE CORRECT INPUT \n");
    return 0;
  }

  srand(time(NULL));
  for (i = 0; i < tril; i++)
  {
    pk = rand() % tb;
    if (pk < r)
      rc++;
    else if (pk < r + b)
      bc++;
    else
      gc++;
  }
  printf("\nResults after %d experiments:\n", tril);
  printf("Red   : %d   Probability = %.4f\n", rc, (float)rc / tril);
  printf("Green : %d   Probability = %.4f\n", gc, (float)gc / tril);
  printf("Blue  : %d   Probability = %.4f\n", bc, (float)bc / tril);
  return 0;
}