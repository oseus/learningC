#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int age = 0;
  printf("Quel age as-tu?");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf ("Vous avez %d ans ?Vous êtes donc majeur!\n", age);
  }
  else if (age > 5)
  {
    printf("tu n'es pas vieux mais plus tout jeune non plus!\n");
  }
  else
  {
    printf("Aga gaa aga gaaa XD \n");
  }

  int menu = 0;
  printf("====Menu====\n 1. Royal Cheese\n 2. Mc Deluxe\n 3. Mc Bacon\n 4. Big Mac\n Votre choix?");
  scanf("%d", &menu);

  switch (menu)
  {
    case 1:
    printf("Vous avez choisi un Royal Cheese\n");
    break;

    case 2:
    printf("Vous avez choisi un Mc Deluxe\n");
    break;

    case 3:
    printf("Vous avez choisi un Mc Bacon\n");
    break;

    case 4:
    printf("Vous avez choisi un Big Mac\n");
    break;

    default:
    printf("vous devez choisir un chiffre du menu!BANANE\n");
    break;
  }

  return 0;
}
