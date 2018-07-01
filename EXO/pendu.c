#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char lireCaractere();
int gagne(int lettreTrouvee[]);
int recherchelettre(char lettre, char motSecret[], int lettreTrouvee[]);



int main(int argc, char *argv[])
{
  char lettre = 0; // stock la lettre donné
  char motSecret[] = "MARRON"; //mot à trouver
  int lettreTrouvee[6] = {0};  //tableau booleen, chaque case correspont à une lettre du mot. 0=lettre non trouvé ,1= lettre trouvée
  int coupsRestants = 10;
  int i; //variable pour parcourir le tableau

  printf("Bienvenue dans le pendu !\n\n" );

  while (coupsRestants > 0 && !gagne(lettreTrouvee))
  {
    printf("Il vous reste %d coups à jouer.\n", coupsRestants );
    printf("Quel est le mot secret?\n" );

    // On affiche le mot secret en masquant les lettre non trouvées
    for(i = 0; i < 6; i++)
    {
      if(lettreTrouvee[i]) //si on a trouvée la lettre n°if
         printf("%c", motSecret[i] ); //on l'affiche
      else
          printf("*" );
    }

    printf("\nProposez une lettre : " );
    lettre = lireCaractere();

    // Si ce n'est pas la bonne lettre
    if(!recherchelettre(lettre, motSecret, lettreTrouvee))
      {
        coupsRestants--;
      }
  }

  if(gagne(lettreTrouvee))
     printf("Gagne le mot trouvé est : %s \n", motSecret );
  else
     printf("Perdu, le mot secret était : %s \n", motSecret );

  return 0;
}

char lireCaractere()
{
  char caractere = 0;

  caractere = getchar(); //on lit le premier caractere,
  caractere = toupper(caractere); // met la lettre en majuscule

  while(getchar() != '\n');

  return caractere; //on retourne le premier caractere que l'on a lu
}

int gagne(int lettreTrouvee[])
{
  int i = 0;
  int joueurGagne = 1;

  for(i = 0; i < 6; i++)
  {
    if(lettreTrouvee[i] == 0)
       joueurGagne = 0;
  }
  return joueurGagne;
}

int recherchelettre(char lettre, char motSecret[], int lettreTrouvee[])
{
  int i = 0;
  int bonneLettre = 0;

  //on parcourt le mot secret et on vérifie si la réponse proposée y est
  for(i = 0; motSecret[i] != '\0'; i++)
  {
    if(lettre == motSecret[i])
    {
      bonneLettre = 1;
      lettreTrouvee[i] = 1; // on met à 1 la case du tanleau de booleens correspondant
    }
  }

  return bonneLettre;
}
