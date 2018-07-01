#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[])
{
  char mot1[] = "David ";
  char mot2[] = "Bovari";
  int test = strcmp(mot1, mot2);

  if(test == 0)
     printf("Les deux mots sont identiques\n" );
  else if(test < 0)
     printf("%s < %s\n", mot1, mot2 );
  else
     printf("%s > %s\n", mot1, mot2 );

  printf("%s\n", strcat(mot1, mot2) ); //fusionne

  //------------------------------------------------------------------

  char text[] = "Boul et Bill";
  char mot[]  = "Bill";


  if(strstr(text, mot) != NULL) // permet de trouver une chaine de character dans une autre chaine de charactère
     printf("mot trouvé!\n");

//---------------------------------------------------------------------

   char c = 'e';

   char *resultat = strchr(text, c); // permet de trouver un character en particulier et d'afficher tout ce qu'il y a à partir de lui
   printf("%s\n", resultat );

//------------------------------------------------------------------------

   char *resultat2 = strpbrk(text, "euo");
   printf(" strpbrk euo trouve en premier : %s\n", resultat2 );

//--------------------------------------------------------------------------

  char phrase[100];
  int age = 15;

  sprintf(phrase, "abon %d ans?", age); // met le mot dans le tableau

  printf("%s\n", phrase );

  return 0;
}
