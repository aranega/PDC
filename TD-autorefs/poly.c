#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct monome_s monome_t;
struct monome_s {

};

typedef struct polynome_s polynome_t;
struct polynome_s {

};


void inc_poly(polynome_t * polynome)
{

}

void inc_poly_rec(polynome_t * polynome)
{

}

double eval_poly(polynome_t * polynome, int entier)
{
  return 0.0;
}

void print_poly(polynome_t * polynome)
{

}

void free_pol(polynome_t ** polynome) {

}

polynome_t * read_poly(void)
{

}

void add_mono_poly(monome_t * m, polynome_t ** poly)
{
  
}

int main(void){
  polynome_t * poly = read_poly();
  // monome_t m = {1, 0};
  // add_mono_poly(&m, &poly);
  print_poly(poly);
  free_pol(&poly);
  return 0;
}
