#include "graphics.h"
#define LARGEUR    800
#define HAUTEUR    800
#define COUL_FOND  noir
#define NB_POINTS  20
 
struct element{
  POINT p;
  struct element *suiv;
};
typedef struct element *Liste;

Liste ajoutDebut(Liste l, POINT p);
Liste supprimeDebut(Liste l);
void dessineListeRec(Liste l);
void dessineListe(Liste l);
