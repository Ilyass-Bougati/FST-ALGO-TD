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
  int A, B, C, X, Y;
  float W;

  // lecture des variables
  printf("Entrer les reels A B et C : ");
  scanf("%d %d %d", &A, &B, &C);

  // tretement des variables
  X = A + B;
  Y = (A * B) - C;
  W = X + Y;

  // affichage
  printf("%d %d\n", X, Y);

}