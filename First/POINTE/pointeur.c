#include <stdio.h>

void inverser_nombres(int *pt_nb1, int *pt_nb2)
{
  int temporaire = 0;

  temporaire = *pt_nb2;
  *pt_nb2 = *pt_nb1;
  *pt_nb1 = temporaire;
}

int main(void)
{

  int nombreA = 15;
  int nombreB = 28;

  int *pointeurSurNombreA = &nombreA;
  int *pointeurSurNombreB = &nombreB;

  printf("Avant : A = %d et B = %d\n", nombreA, nombreB );
  inverser_nombres(pointeurSurNombreA, pointeurSurNombreB);
  printf("Après : A = %d et B = %d\n", nombreA, nombreB );

  return 0;

}
