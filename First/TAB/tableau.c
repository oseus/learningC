#include <stdio.h>

#define TAILLE_TAB 5

void afficher_tableau(int tab[], int taille);

int main(int argc, char *argv[])
{
  int tableau[TAILLE_TAB] = {12,15,63,96,85};

    afficher_tableau(tableau, TAILLE_TAB);

    printf("\n\n");
    tableau[2] = 74;

    afficher_tableau(tableau, TAILLE_TAB);

    printf("\n\n");



  return 0;
}

void afficher_tableau(int tab[], int taille)
 {
   int i;

   for ( i = 0; i < taille; i++)
     printf("[%d] ", tab[i] );
 }
