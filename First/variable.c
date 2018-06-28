#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //équivalent de int main()
{
  int nombreDeVies = 5, niveau = 1; // Au départ, le joueur a 5 vies

  printf("Vous avez %d vies\n", nombreDeVies);
  printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête
  nombreDeVies = 4; // Il vient de perdre une vie !
  printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);
  printf("Vous avez %d vies et vous etes au niveau n° %d\n", nombreDeVies, niveau);


  int age = 0; //on initialise la variable à 0

  printf("Quel age avez-vous ?");
  scanf("%d", &age); //On demande d'entrer l'âge
  printf("Ah ! vous avez donc %d ans! \n\n",age); //on appel la variable


  return 0;
}
