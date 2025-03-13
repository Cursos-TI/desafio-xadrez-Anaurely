#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int torre;
    int bispo;
    int rainha;
       

   
    printf("##Bem-vindo ao jogo xadrez!##\n");
    

    for(torre = 0;torre < 3; torre++) {//A Estrutura for foi aplicada na peça Torre.  
        printf("Torre - Direita\n");
    }

    
    do {//A Estrutura  do while foi aplicada na peça Bispo.
        printf("Bispo - Cima_Esquerda\n",bispo);
        bispo++;
        }   while (bispo < 1);


    while (rainha < 2) {// A Estrutura while foi aplicada na peça Rainha.
        printf("Rainha - Esquerda\n");
        rainha++;
        }
    
    return 0;
}
