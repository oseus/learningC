#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
  int continuerPartie = 0;

   printf("Salut, voulez-vous jouer au Plus ou Moins?\n" );

    //Boucle pour recommencer le programme.

   do {
    int menu = 0, nombreMystere = 0, nombreEntre = 0, compteurCoup = 0, max = 0;
    const int MIN = 1;

    printf(" Choisissez la difficulté:\n 1_ entre 1 à 10\n 2_ entre 1 et 100\n 3_ entre 1 et 1000\n 4_ entre 1 et 10000\n ");
    scanf("%d", &menu );

    //Menu pour choisir le max

        /*ATTENTION PROBLEME : le joueur doit entrer deux fois son choix pour que celui-ci soit prise en compte.
        ce qui a comme effet secondaire de compter le chiffre du choix du menu comme 1er chiffre du jeu en lui-même*/

    switch (menu)
    {
      case 1:
      max = 10;
    break;
      case 2:
      max = 100;
    break;
      case 3:
      max = 1000;
    break;
      case 4:
      max = 10000;
    break;
    default:
    printf("vous devez choisir un chiffre du menu!\n");
    break;
    }

    // Génération du nombre aléatoire

    srand(time(NULL));
    nombreMystere = (rand() % (max - MIN + 1)) + MIN;

    // La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère

    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

        // On incrémente la variable compteurCoup dans la boucle
        compteurCoup ++;

        // On compare le nombre entré avec le nombre mystère

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", compteurCoup);
            //A cause du bug d'entrée de chiffre, j'ai préféré mettre compteurCoup - 1 pour qu'il compte le vrai nombre d'essai du joueur.
    } while (nombreEntre != nombreMystere);

    printf("Voulez-vous recommencer? Si oui marquez 1 si non marquez 0 !\n" );
    scanf("%d", &continuerPartie );
  } while (continuerPartie == 1);

    return 0;
}
