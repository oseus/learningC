#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


char lireCaracter();


int main(int argc, char *argv[])
{
  lireCaracter();

  printf("Le premier caractere est : %c\n", lireCaracter() );

  return 0;
}

char lireCaracter()
{
  char caractere = 0;

  caractere = getchar();  // On lit le premier caractere
  caractere = toupper(caractere);  // On met la lettre en majuscule

  // On lit les autres caractere jussqu'au \n (pour les effacer)
  while (getchar(caractere) != '\n');

  return caractere;
  
}
