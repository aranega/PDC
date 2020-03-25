#include <stdio.h>


void inverse(char *tab)
{

}


int my_strcmp(char *tab1, char *tab2)
{

  return 0;
}


int main(void)
{
  char s1[10] = "abcd";
  char s2[10] = "abcde";
  char s3[10] = "zyxa";

  inverse(s1);
  inverse(s2);
  inverse(s3);
  printf("%s, %s, %s\n", s1, s2, s3);
  printf("%d, %d, %d\n", my_strcmp(s1, s2), my_strcmp(s2, s3), my_strcmp(s3, s1));

  return 0;
}
