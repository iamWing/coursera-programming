/**
 * @brief Week 2 exercise that calculates the sphere volume.
 *
 * @file fixed_sphere_volume.c
 * @author Wing Chau (wing@devtography.com)
 * @date 2021-11-17
 */
#include <err.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(int argc, char *argv[]) {
  const char *errstr;

  int radius = strtonum(argv[argc - 1], 0, INT32_MAX, &errstr);

  if (errstr) {
    errx(1, "CLI argument supplied is %s: %s", errstr, argv[argc - 1]);
  }

  double volume = 4.0 / 3 * PI * pow(radius, 3);

  printf("Sphere volume of radius %d is : %f \n\n", radius, volume);

  return 0;
}
