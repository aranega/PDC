#include <stdio.h>
#include <stdlib.h>


char * strdup(const char * src)
{
  // Code ici !
  return src;
}




int main(void)
{
  char str[] = "abc";
  char * str2 = strdup(str);
  printf("Different string? %s\n", str != str2 ? "true" : "false");
  return 0;
}
