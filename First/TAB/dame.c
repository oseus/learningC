#include <stdio.h>



#define NOMBRE_LIGNES 3
#define NOMBRE_COLONNES 2


int main(int argc, char *argv[])
{
  int damier[NOMBRE_LIGNES][NOMBRE_COLONNES] = { {1, 2}, {3, 4}, {5, 6} };
  int i, j;

  for(i = 0 ; i < NOMBRE_LIGNES ; i++)
  for(j = 0 ; j < NOMBRE_COLONNES ; j++)
    printf("[%d] [%d] = %d\n", i, j, damier[i][j] );

    
  return 0;
}
