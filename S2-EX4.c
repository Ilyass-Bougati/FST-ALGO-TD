/* L'ALGORITHM
  entier X, Y, D, R
  lit(X, Y)
  D = X / Y
  R = X % Y
  ecrit("Q = ", Q, "R = ", R)

*/

#include <stdio.h>

int main()
{
  // declaration des variables
  int X, Y, D, R;

  // lecture des variables
  printf("Entrer les entiers X et Y : ");
  scanf("%d %d", &X, &Y);

  // traitement des variables
  D = X / Y;
  R = X % Y;

  // affichage des resultats
  printf("D = %d\nR = %d\n", D, R);

}