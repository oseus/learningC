#include <stdio.h>
#include <stdlib.h>


void bonjour(void)
{
  printf("Hello world\n");

}

int nombreDeVie()
{
  static int vie = 0;
  vie += 2;

  return vie;
}
