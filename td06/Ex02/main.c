#include <stdio.h>
#include "circonference.h"
#include "surface.h"
#include "pi.h"

int main(int argc,char **argv) {
  int f;
  double j;
  printf("entrez un rayon : \n");
  scanf("%d", &f);
  j = circonference(f);
  printf("Circonférence : %lf \n", j);
  j = surface(f);
  printf("Surface : %lf \n", j); 
  return 0;
}
