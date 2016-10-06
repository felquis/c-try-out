#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
  char name[30];
  char nick[30];
};

int main() {
  struct Pessoa pessoa1;

  sprintf(pessoa1.name, "Felquis");

  pessoa1.name[8] = 'a';
  pessoa1.name[7] = 'f';

  sprintf(pessoa1.nick, "Amor Incondicional!");

  printf("%s, %s\n", pessoa1.name, pessoa1.nick);

  return 0;
}

