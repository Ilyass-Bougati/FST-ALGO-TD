/*
  Ecrire un programme en C qui détermine si un nombre entier n saisi
  au clavier est pair ou impair.
*/

#include <stdio.h>

int main()
{
  // declaration des variables
  int n;

  // lecture des variables
  printf("Entrer votre entier n : ");
  scanf("%d", &n);

  // tretement des variables et affichage
  if (n % 2 == 0)
  {
    printf("Le entier %d est pair\n", n);
  } else {
    printf("Le entier %d est impair\n", n);
  }

}