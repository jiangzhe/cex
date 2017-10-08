#include<stdio.h>

int main(void) {
  int i = 'FATE';
  char c = i;
  char c2 = i & 0xFF;
  printf("%d %c %c\n", i, c, c2);

  printf("hello %c\n", '0x10');

  return 0;
}