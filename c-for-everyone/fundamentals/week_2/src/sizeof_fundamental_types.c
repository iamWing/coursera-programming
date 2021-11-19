/**
 * @brief Prints the size of fundamental types.
 * 
 * @file sizeof_fundamental_types.c
 * @author Wing Chau (wing@devtography.com)
 * @date 2021-11-15
 */
#include <stdio.h>

int main(void) { 
  printf("On this system\n");
  printf("int is %lu bytes\n", sizeof(int));
  printf("float is %lu bytes\n", sizeof(float));
  printf("double is %lu bytes\n", sizeof(double));
  printf("long int is %lu bytes\n", sizeof(long int));
  printf("long double is %lu bytes\n", sizeof(long double));
  printf("char is %lu bytes\n", sizeof("e"));

  return 0;
}
