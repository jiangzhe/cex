#include<stdio.h>

int main(void) {
  char* first_name = "Gustav";
  char* last_name = "Mahler";

  printf("%s %s\n", first_name, last_name);
  printf("%s\n%s\n", first_name, last_name);
  printf("%s ", first_name);
  printf("%s\n", last_name);
}

