#include <stdio.h>

/* print value of EOF */
main()
{
  int c;

  while ((c = getchar()) != EOF){
    putchar(c);
  }
  putchar(c);
}