#include <stdio.h>
#include <stdlib.h>


/*

Suite de Fibonacci
-----------------
1 1 2 3 5 8 13 21....

*/
/* Cette fonction fonctionne mais est plus longue à l'exécution
int fibonacci(int n)
{
  if(n < 2)
      return 1; //renvoie 1

    return(fibonacci(n -1) + fibonacci(n - 2));
}
*/

int fibonacci(int n)
{

  int i = 1, terme0 = 1, terme1 = 1, tmp;

  if(n < 2)
      return 1;


  while(i < n)
  {
    tmp = terme0 + terme1;
    terme0 = terme1;
    terme1 = tmp;
    i++;
  }
  return(terme1);

    return(fibonacci(n -1) + fibonacci(n - 2));
}
 int main(int argc, char *argv[])
{
  printf("%d\n", fibonacci(5) );

  return 0;
}
