#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  char nom[10];

  printf("Quel est votre nom?\n" );
  fgets(nom, 10, stdin);       //  fgets (tableau où sera stocké le mot, le nombre de place du tableau, stdin= clavier)

  printf("ah! vous vous appelez : %s\n", nom ); // fgets() enregistrera toujour un saut à la ligne après le mot enregistré.

  return 0;
}
