#include <stdio.h>



int main(int argc, char *argv[])
{
  int i, nombreDeLigne = 5, j, e;

  for(i = 0; i < nombreDeLigne ; i++)  // tant que i n'est pas égale au nombre de ligne, la boucle continue
   {
     for (j = 0; j < nombreDeLigne-i ; j++) // nombreDeLigne-1 permet de diminuer le nombre d'espace au fur et à mesure(5-0,5-1,5-2 etc..)
     {
       printf(" " );
     }
     for(e = 0; e < 1 + 2*i ;e++) // 1+2*i lui permet de le faire de faire le 1er de base puis d'augmenter à chaque loop en pyramide
     {
     printf("*");
     }
     printf("\n" );
   }
  return 0;
}
