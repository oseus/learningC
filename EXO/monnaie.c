#include <stdio.h>


int main(int argc, char *argv[])
{
  int purchases = 0, amount_paid = 0, result = 0;
  int bill20 = 0, bill10 = 0, bill5 = 0, coin2 = 0, coin1 = 0;

  printf("Entrez le total des achats\n" );
  scanf("%d", &purchases );
  printf("Entrez la somme payee\n" );
  scanf("%d", &amount_paid );

  if(amount_paid < purchases)
  {
    printf("Vous n'avez pas payé suffisamment!\n" );
    return -1;
  }
  else if(amount_paid == purchases)
  {
    printf("Il n'y a pas de monnaie à rendre\n" );
    return 0;
  }
  else
  {
    result = amount_paid - purchases;

    bill20 = result / 20;
    result %= 20;     // revient à result = result % 20;
    bill10 = result / 10;
    result %= 10;
    bill5 = result / 5;
    result %= 5;
    coin2 = result / 2;
    result %= 2;
    coin1 = result / 1;
    result %= 1;

    printf("\n________MONNAIE A RENDRE______\n" );
    if(bill20 > 0)
      printf("Billets de 20: %d\n", bill20 );
      if(bill10 > 0)
      printf("Billets de 10: %d\n", bill10 );
      if(bill5 > 0)
      printf("Billets de 5: %d\n", bill5 );
      if(coin2 > 0)
      printf("Pieces de 2: %d\n", coin2 );
      if(coin1 > 0)
      printf("Pieces de 1: %d\n", coin1 );

  }


  return 0;
}
