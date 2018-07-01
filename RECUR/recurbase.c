#include <stdio.h>



void fonctionRecursive(int i)
{
  if(i == 10)
  return;

  printf("(%d) Je suis une fonction recursive.\n", i + 1 );
  fonctionRecursive(i+1);
}

int main(int argc, char *argv[])
{
  fonctionRecursive(0);

  return 0;
}
