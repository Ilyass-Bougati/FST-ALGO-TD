#include <stdio.h>

int main()
{
  // declaration des variables
  int A, B, C, W, X, Y;

  // lecture des variables
  printf("Donnez 3 entiers A,B et C ");
  scanf("%d %d %d", &A, &B, &C);

  // tretement des variables
  X = A + B;
  Y = (A * B) - C;
  W = X + Y;

  // affichage
  printf("X=%d Y=%d W=%d\n", X, Y, W); 
  // pour la premiere qs
  // printf("X=%d Y=%d\n", X, Y); 

}