#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int torre;
    int bispo;
    int rainha;
    char opcao; 
    

    printf("##Bem-vindo ao jogo xadrez!##\n");

    printf("T = torre\n");
    printf("B = bispo\n");
    printf("R = rainha\n");

    printf("Escolha sua peça (T/B/R): \n");
    scanf(" %c", &opcao); //Ler um caractere

    switch (opcao) {
        case 'B':
        case 'b':
            printf("Você escolheu o bispo\n");
            for (bispo = 1; bispo <= 3; bispo++) {
                printf("Bispo %d Cima_direita\n", bispo);
            }
            break;

        case 'T':
        case 't':
            printf("Você escolheu a torre\n");
            torre = 1; // Inicializando a variável torre
            while (torre <= 3) {
                printf("Torre %d Esquerda\n", torre);
                torre++;
            }
            break;

        case 'R':
        case 'r':
            printf("Você escolheu a rainha\n");
            rainha = 1;
            do
            {printf("Rainha %d Direita\n", rainha);
            rainha++;
            } while (rainha <= 3);
            
            
            break;

        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}