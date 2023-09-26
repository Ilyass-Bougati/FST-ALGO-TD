/*
  reel X, Y, Z
  lit(X, Y)
  Z = X
  X = Y
  Y = Z
*/

#include <stdio.h>

int main()
{
  // declaration des variables
  float X, Y, Z;

  // lecture des variables
  printf("Entrer les reels X et Y : ");
  scanf("%f %f", &X, &Y);

  // traiment des variables
  Z = X;
  X = Y;
  Y = Z;
}
