/* L'AGORITHM

  entier A, B, C, D, E, Z;
  lit(A, B, C, D, E)
  Z = A
  A = B
  B = C
  C = E
  E = Z

*/

#include <stdio.h>

int main()
{
  // declaration des variables
  int A, B, C, D, E, Z;

  // lecture des variables
  printf("Entrer les entiers A, B, C, D et E : ");
  scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

  // traitement des variables
  Z = A;
  A = B;
  B = C;
  C = D;
  E = Z;

  // affichage
  printf("A = %d\nB = %d\nC = %d\nD = %d\nE = %d\n", A, B, C, D, E);

}