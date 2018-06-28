#include <stdio.h>

void change_nombres(int *nb)
{
  *nb = 15;
}

int main(void)
{

  int nombre = 0;

  printf("nombre = %d\n", nombre);
  change_nombres(&nombre);
  printf("nombre = %d\n", nombre);

  return 0;

}

//Sans pointeur ce programme renverrai 0 les deux fois
