#include <stdio.h>


// Récupération des arguments sur la ligne de commandes
int main(int argc, char **argv)
{
  printf("%d\n", argc);

  for (int i = 0; i < argc; i++) {
    // for (int j = 0; argv[i][j] != '\0'; j++) {
    //   putchar(argv[i][j]);
    // }
    int j = 0;
    while (argv[i][j] != '\0') putchar(argv[i][j++]);
    putchar('\n');
  }
  return 0;
}
