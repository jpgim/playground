#include <stdio.h>

int main() {

  char lower, upper, result;

  lower = 'a';
  upper = 'B';
  printf("%c to uppercase using bit manipulation: c & ~(1<<5) => ", lower);
  result = lower & ~(1 << 5);
  printf("%c\n", result);

  printf("%c to lowercase using bit manipulation: c | (1<<5) => ", upper);
  result = upper | (1 << 5);
  printf("%c\n", result);

  printf("swapcase using bit manipulation c ^ (1 << 5)\n");
  printf("swapcase %c => %c\n", lower, lower ^ (1 << 5));
  printf("swapcase %c => %c\n", upper, upper ^ (1 << 5));

  return 0;
}
