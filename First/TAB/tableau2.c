#include <stdio.h>

#define TAILLE_TAB 5

void afficher_tableau(int tab[], int taille);
int *creer_tableau(void);

//--------------------------------------------------------------

int main(int argc, char *argv[])
{
  int *tableau = creer_tableau();

    afficher_tableau(tableau, TAILLE_TAB);

    printf("\n\n");
    tableau[2] = 74;

    afficher_tableau(tableau, TAILLE_TAB);

    printf("\n\n");



  return 0;
}
//----------------------------------------------------------------

int *creer_tableau(void)
 {
   static int tableau_entiers[5];
   int i;

   for(i = 0 ; i < 5 ; i++)
       tableau_entiers[i] = i * 3;

       return tableau_entiers;
 }

//----------------------------------------------------------------

void afficher_tableau(int tab[], int taille)
 {
   int i;

   for ( i = 0; i < taille; i++)
     printf("[%d] ", tab[i] );
 }
