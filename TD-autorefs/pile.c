#include <stdio.h>
#include <stdlib.h>

typedef struct pile_s * pile_t;
// Give def of struct pile_s

int is_empty(pile_t pile)
{
  return 0;
}

void init(pile_t *pile)
{

}

int push(pile_t *pile, int val)
{
  return 0;
}


int pop(pile_t *pile)
{
  return 0;
}


void destroy(pile_t *pile)
{

}


int main(void)
{
  pile_t pile;
  init(&pile);
  printf("is pile empty? %s\n", is_empty(pile) ? "yes": "no");
  printf("Pushing 5");
  push(&pile, 5);
  printf("is pile empty? %s\n", is_empty(pile) ? "yes": "no");

  printf("Pushing 23");
  push(&pile, 23);
  printf("is pile empty? %s\n", is_empty(pile) ? "yes": "no");

  printf("Poping %d\n", pop(&pile));
  printf("Poping %d\n", pop(&pile));
  printf("is pile empty? %s\n", is_empty(pile) ? "yes": "no");

  printf("Destroying pile\n");
  destroy(&pile);
  printf("Now pile points to %p\n", pile);
  return 0;
}
