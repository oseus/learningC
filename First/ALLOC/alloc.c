#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
  int nombreJoueurs = 0;
  int *liste_joueurs = NULL;
  int i;

  printf("Combien de joueur?\n" );
  scanf("%d", &nombreJoueurs );

  liste_joueurs = malloc(sizeof(int) * nombreJoueurs); // adapte la mémoire par rapport à la taille du nombre de joueur demandé

  if(liste_joueurs == NULL)
    exit(1);

  for ( i = 0; i < nombreJoueurs; i++)
  {
    printf(" Le numéro du joueur %d est : %d \n", i + 1, i * 3 );
    liste_joueurs[i] = i * 3;
  }

    for ( i = 0; i < nombreJoueurs; i++)
    {
      printf("[%d]\n", liste_joueurs[i] );
    }



  free(liste_joueurs); // libere la mémoire qui a été utilisé

  return 0;
}
