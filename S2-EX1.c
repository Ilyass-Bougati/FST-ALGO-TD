/* L'ALGORITHM

  reel A,B,C,W,X,Y
  lit(A,B,C)
  X = A + B
  Y = (A * B) - C
  W = X + Y
  ecrit("X = ", X, "Y = ", Y)

*/

#include <stdio.h>

int main()
{
  // declaration des variables
  float A, B, C, W, X, Y;

  // lecture des variables
  printf("Entrer les reels A B et C :");
  scanf("%f %f %f", &A, &B, &C);

  // tretement des variables
  X = A + B;
  Y = (A * B) - C;
  W = X + Y;

  // affichage
  printf("X = %f\nY = %f\n", X, Y);

}