#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau);


int main( int argc,char *argv)
{
  int somme = 0;
  int tableau[4] = {12, 45, 68, 96};

  somme = sommeTableau(tableau, 4);

  printf("%d\n", somme );

  return 0;
}

int sommeTableau(int tableau[], int tailleTableau)
{

  return tableau[0] + tableau[1] + tableau[2] + tableau[3];
}
