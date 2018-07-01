#include <stdio.h>




union Nombre  // permet d'avoir le même emplacement mémoire peu importe le Type choisi ainsi il y a une meilleure gestion de la mémoire
{
   int entier;
   float decimal;
};

int main(int argc, char *argv[])
{
  union Nombre nb1;

  nb1.entier = 3;
  nb1.decimal = 3.14;

  return 0;
}
