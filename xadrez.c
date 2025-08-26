#include <stdio.h>

/*
  Informações do desafio Novato:
    .Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
    .Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, 
      você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
    .Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

  Informações do desafio Aventureiro:
    .Cavalo: Move-se em L, utilizando loop aninhado mova o cavalo 2 casas para baixo e 1 para esquerda.
  
  Informações do desafio Mestre:
    .Torre, Bispo e Rainha: funções recursivas para simular o movimento de cada peça, substituindo os loops originais.
    .Cavalo: loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
    .Bispo:Deve ser implementado com recursividade, e também com loops aninhados, utilizando o loop mais externo para o movimento vertical, e o mais interno 
    para o movimento horizontal.

  OBS: Trabalho atualizado conforme do desafio mestre!
*/

//Movimento da torre usando função recursiva
void torre(int i) {
  if(i > 0) {
    printf("-Cima\n");
    torre(i-1);
  }
};

//Movimento do bispo usando função recursiva e aninhada
void bispo(int i) {
  printf("-Cima, ");
  if(i > 0) {
    printf("Direita\n");
    if(i > 1) { //if implementado para não chamar mais 1 "-cima"
      bispo(i-1);
    }
  }
};

//Movimento da rainha usando função recursiva
void rainha(int i) {
  if(i > 0) {
    printf("-Esquerda\n");
    rainha(i-1);
  }
};

//Movimento do cavalo usando função avançada e função aninhada
void cavalo() {
  int i, j;

  for (i = 1; i <= 1;  i++) {
    for (j = i; j <= 2 && i == 1 ; j+=(i)){
      printf("-Cima\n");
    }
    
    printf("-Direita\n");
  }
}

/*
  Função principal, passa a quantidade de execução para as
  funções de movimento das peças
*/
int main() {
  printf("### Movimentação de peças de xadrez ###\n");

  printf("  \n");
  printf("Movimento da torre: \n");
  torre(5);

  printf("  \n");
  printf("Movimento do bispo: \n");
  bispo(5);

  printf("  \n");
  printf("Movimento da Rainha: \n");
  rainha(8);

  printf("  \n");
  printf("Movimento do Cavalo: \n");
  cavalo();

  return 0;
}