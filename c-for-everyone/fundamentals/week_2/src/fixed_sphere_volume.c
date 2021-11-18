/**
 * @brief Week 2 exercise that calculates the sphere volume.
 *
 * @file fixed_sphere_volume.c
 * @author Wing Chau (wing@devtography.com)
 * @date 2021-11-17
 */
#include <err.h>
#include <errno.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(int argc, char *argv[]) {
  char *endptr;
  errno = 0;
  long int radius = strtol(argv[argc - 1], &endptr, 10);

  if ((radius == 0 && errno == EINVAL) || *endptr != '\0') {
    errx(EXIT_FAILURE, "CLI argument supplied is invalid: %s", argv[argc - 1]);
  }

  if ((radius == LONG_MAX || radius == LONG_MIN) && errno == ERANGE) {
    errx(EXIT_FAILURE, "CLI argument supplied is out of range: %s",
         argv[argc - 1]);
  }

  double volume = 4.0 / 3 * PI * pow(radius, 3);

  printf("Sphere volume of radius %ld is : %f \n\n", radius, volume);

  return EXIT_SUCCESS;
}
