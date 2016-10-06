#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
  char name[30];
  char nick[30];
};

int main() {
  struct Pessoa pessoas[2];

  int i = 0;

  for (; i < 2; i++) {
    printf("Nombre: ");
    scanf("%s", pessoas[i].name);
    printf("Nick: ");
    scanf("%s", pessoas[i].nick);
  }

  i = 0;
  for (; i < 2; i++) {
    printf("%s, %s \n", pessoas[i].name, pessoas[i].nick);
  }

  return 0;
}

