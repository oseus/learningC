#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[])
{
  signed char prenom[25];  //ou prenom[] pour laisser l'ordi choisir
  signed char newPrenom[127];

  printf("Quel est ton prénom?\n" );
  scanf("%s", prenom );
  printf("Ton prénom est %s\n", prenom );

  printf("Quel est ton nouveau prénom?\n" );
  scanf("%s", newPrenom );

  strcpy(prenom, newPrenom);  //pour copy le newPrenom dans le prenom de base

  printf("Ton nouveau prénom est %s\n", prenom );

//------------------------------------------------------------------

   int howMany = strlen(prenom);

  printf("Ton prénom a %d lettres\n", howMany); //affiche le nombre de lettre.



  return 0;
}
