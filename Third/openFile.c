#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  int age = 0;

  fichier = fopen("test.txt", "r+");

  if (fichier != NULL)
  {
    //on peut lire et ecrire dans le fichier
    printf("Quel age as-tu?\n");
    scanf("%d", &age);

    fprintf(fichier, "Le programme est utilisé par quelqu'un de %d ans.", age );

    fclose(fichier);
  }
  else
  {
    printf("Impossible d'ouvrir le fichier test.txt\n");
  }
  return 0;
}
