#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

	   // MOVER TORRE 5 CASAS PRA DIREIRA
   printf("Torre cinco casas a direita\n");
   for (int i = 0; i < 5; i++){
       printf("Direita\n");
   }

   // MOVER Bispo 5 CASAS PRA DIREIRA
   printf("Bispo 5 casas diagonal casas a direita\n");
   for (int i = 0; i < 5; i++){
       printf("Cima/Direita\n");
   }

   // MOVER rainha 8 CASAS PRA esquerda
   printf("rainha 8 casas a esquerda\n");
   for (int i = 0; i < 8; i++){
       printf("Esquerda\n");
   }


      // movimetacao cavalo
      printf("movimetacao cavalo\n");
      for (int i = 1; i <= 1; i++) {
        printf("Cima\n");


          for (int y = 1; y <= 2; y++) {
            printf("Lado\n");
        }
    
    
    return 0;
}
