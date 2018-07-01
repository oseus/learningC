#include <stdio.h>
#include <string.h>

                 //le typedef peut aussi s'écrire => typedef struct Player Player;    (pour etre défini)

typedef struct Player          //crée une structure que l'on défini comme un type pour être utiliser plus tard en raccourci
{                              //elles sont généralement placé dans les .h
  signed char username[256];
  int hp;
  int mp;
} Player;                    //Toujours mettre un ";" à la fin d'une structure

//----------------------------------------------------------------------

  void create_player(Player *p)
  {
    strcpy((*p).username, "Nono");
    (*p).hp = 200;
    p->mp = 50;      // AUTRE SYNTAXE pour pointeur!
  }
//----------------------------------------------------------------------

int main(int argc, char *argv[])
{
  Player p1 = {"Oseus", 100, 100};

    printf("Nom du joueur : %s\n", p1.username );
    printf("HP :%d | MP :%d\n", p1.hp , p1.mp );

    strcpy(p1.username, "David");
    p1.hp -= 50;

    printf("Nom du joueur : %s\n", p1.username );
    printf("HP :%d | MP :%d\n", p1.hp , p1.mp );

    create_player(&p1);

    printf("Nom du joueur : %s\n", p1.username );
    printf("HP :%d | MP :%d\n", p1.hp , p1.mp );

//------------------------------------------------------------------

  Player tableau_joueurs[5];

  tableau_joueurs[2].hp = 150;
  tableau_joueurs[2].mp = 500;
  strcpy(tableau_joueurs[2].username, "Maria");

  Player p2 = tableau_joueurs[2];

  printf("Nom du joueur : %s\n", p2.username );
  printf("HP :%d | MP :%d\n", p2.hp , p2.mp );


  return 0;
}
