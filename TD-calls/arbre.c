#include <stdio.h>
#include <stdlib.h>


cellule_t * creer_cellule(data_t val)
{
  return NULL;
}

void detruire_cellule(cellule_t ** cell)
{

}

int detruire_arbre(cellule_t ** root)
{
  return 0;
}

int main(void)
{
  cellule_t *c = creer_cellule(5);
  c->left = creer_cellule(6);
  c->right = creer_cellule(9);
  printf("%d\n", detruire_arbre(&c));
  return 0;
}
