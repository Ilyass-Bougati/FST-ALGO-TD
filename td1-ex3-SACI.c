/*
  Utiliser la structure S.A.C.I pour écrire un algorithme puis un programme en C qui
  demande à l’utilisateur de taper trois notes N1, N2 et N3 et qui calcule la moyenne M de ces
  notes.
  Si M<5 il affiche ‘’module ajourné’’
  Si 5<=M<10 il affiche ‘’module semi_validé’’
  Si M>=10
  {si 10<=M<12 il affiche ‘’module validé avec mention Passable’’
  si 12<=M<14 il affiche ‘’module validé avec mention Assez Bien’’
  si 14<=M<16 il affiche ‘’module validé avec mention Bien’’
  si M>=16 il affiche ‘’module validé avec mention Très Bien’’
}
*/

#include <stdio.h>

int main()
{
  // declaration des variables
  float n1, n2, n3, moyenne;

  // lecture des variables
  printf("Entrer 3 notes n1 n2 n3 : ");
  scanf("%f %f %f", &n1, &n2, &n3);

  // traitement est affichage de data
  moyenne = (n1 + n2 + n3) / 3;

  if (moyenne < 5)
  {
    printf("module ajourné\n");
  } else if (moyenne < 10) {
    printf("module semi_validé\n");
  } else if (moyenne < 12) {
    printf("module validé avec mention Passable\n");
  } else if (moyenne < 14) {
    printf("module validé avec mention Assez Bien\n");
  } else if (moyenne < 16 && moyenne >= 14) {
    printf("module validé avec mention Bien\n");
  } else if (moyenne >= 16) {
    printf("module validé avec mention Très Bien\n");
  }

}