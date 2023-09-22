/*
  Ecrire un algorithme puis un programme en C qui permet d'afficher le maximum parmi
  deux nombres saisis au clavier.
*/

#include <stdio.h>

int main()
{
  // declaration des variables
  float nombre_1, nombre_2;

  // lecture des variables
  printf("Entrer le permier nombre : ");
  scanf("%f", &nombre_1);
  printf("Entrer le deuxieme nombre : ");
  scanf("%f", &nombre_2);

  // traitement et affichage de output
  if (nombre_1 >= nombre_2)
  {
    printf("le maximum des deux nombres %.2f et %.2f est %.2f\n", nombre_1, nombre_2, nombre_1);
  } else {
    printf("le maximum des deux nombres %.2f et %.2f est %.2f\n", nombre_1, nombre_2, nombre_2);
  }

}