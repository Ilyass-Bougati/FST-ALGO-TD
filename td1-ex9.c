/*
  Ecrire un algorithme qui permet de saisir deux variables réelles A et B et un caractère O
  Si O=’S’, on calcule la somme et on l’affiche
  Si O=’s’, on calcule la soustraction et on l’affiche
  Si O=’P’, on calcule le produit et on l’affiche
  Si O=’R’ et b est non nul, on calcule le rapport et on l’affiche
*/

#include <stdio.h>

int main()
{
  // declaration des variables
  float A, B;
  char O;

  // lecture des variables
  printf("Entrer (respectivement) les variables A, B et O : ");
  scanf("%f %f %c", &A, &B, &O);

  // traitement des variables
  switch (O)
  {
  case 'S':
    printf("%f + %f = %f\n", A, B, A + B);
    break;

  case 's':
    printf("%f - %f = %f\n", A, B, A - B);
    break;

  case 'P':
    printf("%f x %f = %f\n", A, B, A * B);
    break;

  case 'R':
    if (B == 0)
    {
      printf("On ne peux pas divise par 0\n");
      break;
    }
    printf("%f / %f = %f\n", A, B, A / B);
    break;

  default:
    printf("Les operations possible sont 's', 'S', 'P' et 'R'\n");
    break;
  }

}