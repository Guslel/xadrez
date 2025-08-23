#include <stdio.h>

/*
  Informações do desafio Novato:
    .Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
    .Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, 
      você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
    .Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
*/

int torre();
int bispo();
int rainha();

int main() {
  printf("### Movimentação de peças de xadrez ###\n");
  torre();
  bispo();
  rainha();

  return 0;
}

int torre() {
  int i = 1;

  printf("  \n");
  printf("Movimento da torre: \n");
  while (i <= 5){
    printf("-Cima\n");
    i++;
  }

  return 0;
};

int bispo() {
  int i = 1;

  printf("  \n");
  printf("Movimento do bispo: \n");
  do{
    printf("-Cima, Direita\n");
    i++;
  } while (i <= 5);

  return 0;
};

int rainha() {
  int i = 1;

  printf("  \n");
  printf("Movimento da Rainha: \n");

  for (i; i <= 8;  i++) {
    printf("-Esquerda\n");
  }
  
  
  return 0;
};