#include <stdio.h>
#include <stdlib.h>
#include <string.h> // pour strchr()

// ICI nous allons créer notre propre fonction fgets sans le saut à la ligne

int lire(char *chaine, int longueur); //On initialise la fonction lire
void viderBuffer();



int main(int argc, char *argv[])
{
  char nom[10];

  printf("Quel est votre nom?\n" );
  lire(nom, 10);       //  ici on remplace fgets par lire()

  printf("ah! vous vous appelez : %s\n", nom ); // ainsi on a plus de saut à la ligne après le mot


  return 0;
}

int lire(char *chaine, int longueur)
{
  char *positionEntree = NULL;

  //on lit le texte saisi au clavier
  if(fgets(chaine, longueur, stdin) != NULL) //si pas d'erreur de saisie
  {
    positionEntree = strchr(chaine, '\n'); // on recherche l'"ENtrée"
    if(positionEntree != NULL)
    {
      *positionEntree = '\0'; //On remplace par \0
    }
    else
    {
      viderBuffer();
    }
    return 1; //On renvoit 1 si la fonction s'est déroulée sans erreur
  }
  else
  {
    viderBuffer();
    return 0; //on renvoie  si il y a une erreur
  }

}

void viderBuffer() //très important car si le mot dépasse le nombre de case alloué alors le reste apparaitra au prochain scanf
{
  int c = 0;

  while(c != '\n' && c != EOF)
  {
    c = getchar();
  }
}
