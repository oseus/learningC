#include <stdio.h>
#include <stdlib.h>

/*

Factorielle de 3 : 3 * 2 * 1 = 6

*/

//------------------------RECURSIVITE NORMALE------------------------------------//

unsigned long factorielle(int n)  // long car les factorielles peuvent donner très vite de très grand nombre
{
  if(n < 0)
    exit(EXIT_FAILURE);  // pour éviter que ça tente d'aller dans les négatifs

  if(n == 0 || n == 1)  //la fonction s'arretera et renverra le résultat quand n sera égal à 1 ou 0
     return 1;

  return n * factorielle(n - 1); // la fonction se rappel
}

int main(int argc ,char *argv[])
{

  printf("%ld\n", factorielle(15) );

  return 0;
}


//----------------------------RECURSIVITE TERMINALE------------------------------//
/*
unsigned long factorielle(int n , res long)
{
  if(n < 0)
    exit(EXIT_FAILURE);

  if(n == 0)
     return 1;
  if(n ==1)
     return res;

  return n * factorielle(n - 1, n * res); // la fonction appel directement la derniere occurence mit sur la pile
}

int main(int argc ,char *argv[])
{

  printf("%ld\n", factorielle(15, 15) );

  return 0;
}
*/
