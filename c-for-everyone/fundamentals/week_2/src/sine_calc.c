/**
 * @brief Week 2 exercise that returns the value of sine between 0 and 1.
 * 
 * @file sine_calc.c
 * @author Wing Chau (wing@devtography.com)
 * @date 2021-11-19
 */
#include <err.h>
#include <errno.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define PI 3.14159

int main(int argc, char *argv[]) {
  char *endptr;
  errno = 0;
  double angle = strtod(argv[argc - 1], &endptr);

  if (errno != 0 || *endptr != '\0') {
    errx(EXIT_FAILURE, "CLI argument supplied is invalid: %s", argv[argc - 1]);
  }

  if (angle < 0 || angle > 90) {
    errx(EXIT_FAILURE, "CLI argument supplied is out of range: %s",
         argv[argc - 1]);
  }

  printf("sin(%f) = %f \n\n", angle, sin(angle * PI / 180));

  return EXIT_SUCCESS;
}
