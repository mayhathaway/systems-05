#include <stdio.h>

int main() {

  // step 1
  char ch = 'm';
  int in = 7;
  long lo = 23;

  // step 2
  printf("char in hex: %p\n", &ch);
  printf("char in decimal: %lu\n", &ch);
  printf("integer in hex: %p\n", &in);
  printf("integer in decimal: %lu\n", &in);
  printf("long in hex: %p\n", &lo);
  printf("long in decimal: %lu\n", &lo);
  printf("\n");

  // step 3
  char *cp = &ch;
  int *ip = &in;
  long *lp = &lo;

  // step 4
  printf("char pointer: %c\n", *cp);
  printf("int pointer: %d\n", *ip);
  printf("long pointer: %ld\n", *lp);
  printf("\n");

  // step 5
  *cp = 'h';
  *ip = 6;
  *lp = 2020;

  // step 6
  unsigned int unint = 9283904;
  int *int_p = &unint;
  char *char_p = &unint;

  // step 7
  printf("int pointer: %p\t", int_p);
  printf("points to: %d\n", *int_p);
  printf("char pointer: %p\t", char_p);
  printf("points to: %d\n", *char_p);
  printf("\n");

  // step 8
  printf("unint in hex: %x\n", unint);
  printf("unint in decimal: %u\n", unint);
  printf("\n");

  // step 9
  int i;
  for (i = 0; i < 4; i++) {
    printf("byte %d in decimal: %hhu\n", i+1, char_p[i]);
    printf("byte %d in hexadecimal: %hhx\n", i+1, char_p[i]);
  }
  printf("\n");

  //step 10
  for (i = 0; i < 4; i++) {
    char_p[i] += 1;
    printf("byte %d in decimal: %hhu\n", i+1, char_p[i]);
    printf("byte %d in hexadecimal: %hhx\n", i+1, char_p[i]);
  }
  printf("\n");

  // step 11
  for (i = 0; i < 4; i++) {
    char_p[i] += 16;
    printf("byte %d in decimal: %hhu\n", i+1, char_p[i]);
    printf("byte %d in hexadecimal: %hhx\n", i+1, char_p[i]);
  }
  printf("\n");
}
