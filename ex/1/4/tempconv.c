#include <stdio.h>

/* print Celsius-Fahrenheit table
  for celsius = 0, 20, ..., 300; flouting-point version */

main()
{
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;    /* lower limit of temperature table */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */

  celsius = lower;
  printf("%3s %6s\n", "C", "F");
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}