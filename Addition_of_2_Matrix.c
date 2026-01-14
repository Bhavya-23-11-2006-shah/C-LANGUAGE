/*
Program: Matrix Addition
Concepts Used: 2D Arrays, Loops, Input Validation
Level: Practice (College)
*/
#include <stdio.h>
#include <conio.h>
int main()
{
  int i, j, row, col;
  printf("Enter the positive row and coloum of Matrix:\n");
  scanf("%d %d", &row, &col);
  if (row <= 0 || col <= 0)
  {
    printf("invaild please try again!");
    return 1;
  }
  int x[row][col], y[row][col], z[row][col];
  printf("Enter the numbers of first matrix : \n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      scanf("%d", &x[i][j]);
    }
  }
  printf("This is your first Matrix : \t");
  for (i = 0; i < row; i++)
  {
    printf("\t\n");
    for (j = 0; j < col; j++)
    {
      printf("\t%d\t", x[i][j]);
    }
  }
  printf("\nEnter the numbers of Second matrix : \n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      scanf("%d", &y[i][j]);
    }
  }
  printf("This is your Second Matrix : \t");
  for (i = 0; i < row; i++)
  {
    printf("\t\n");
    for (j = 0; j < col; j++)
    {
      printf("\t%d\t", y[i][j]);
    }
  }
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      z[i][j] = x[i][j] + y[i][j];
    }
  }
  printf("\nResult isssss:");
  for (i = 0; i < row; i++)
  {
    printf("\t\n");
    for (j = 0; j < col; j++)
    {
      printf("\t%d\t", z[i][j]);
    }
  }
  getch();
  return 0;
}