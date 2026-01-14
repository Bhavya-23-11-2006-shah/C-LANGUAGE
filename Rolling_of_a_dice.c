#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i, rolls;
  int count5 = 0;
  int dice;

  printf("Enter number of dice rolls: ");
  scanf("%d", &rolls);
  srand(time(NULL));

  for (i = 0; i < rolls; i++)
  {
    dice = rand() % 6 + 1; // Generates numbers 1 to 6

    if (dice == 5)
    {
      count5++;
    }
  }

  printf("\nNumber of times 5 occurred: %d", count5);
  printf("\nEstimated probability of getting 5: %.4f\n", (float)count5 / rolls);

  return 0;
}
