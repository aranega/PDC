#include <stdio.h>


int dico_search(int val, int *tab, int size)
{
  int a = 0, b = size;
  while (a <= b) {
    int m = (a + b) / 2;
    if (tab[m] == val) return m;
    if (tab[m] > val) b = m - 1;
    else a = m + 1;
  }
  return -1;
}


void * bsearch(const void *key, const void *base, unsigned int nel,
               unsigned int width , int (*compar)(const void *, const void *))
{
  return NULL;
}

int comp_int(const void *a, const void *b)
{
  return *(int *)b - *(int *)a;
}



int main()
{
  int tab[10] = {1, 3, 5, 6, 7, 8, 9, 12, 34, 55};
  int val = 5;
  int * res = bsearch(&val, tab, 10, sizeof(int), comp_int);
  printf("%d\n", *res);
  return 0;
}
