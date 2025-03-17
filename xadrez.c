#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverrainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");// Imprime o valor atual.
        moverrainha(casas -1);// Chama a si mesma .
    }
    }
void movertorre(int casas){
    if (casas > 0){
        printf("Direita\n");// Imprime o valor atual.
        movertorre(casas -1);// Chama a si mesma .
        }
        }
void moverbispo(int casas){
    if (casas > 0){
        printf("Direita_Cima\n");// Imprime o valor atual.
        moverbispo(casas -1);// Chama a si mesma .
            }
            }

int main() {
    //Variaveis
    int torre; 
    int bispo;
    int rainha;
    int cavalo;
    char opcao; 
    

    printf("##Bem-vindo ao jogo xadrez!##\n");

    printf("T = torre\n");
    printf("B = bispo\n");
    printf("R = rainha\n");
    printf("C = cavalo\n");

    printf("Escolha sua peça (T/B/R/C): \n");
    scanf(" %c", &opcao); //Ler um caractere

    switch (opcao) {
        case 'B':
        case 'b':
            printf("Você escolheu o bispo\n");
            moverbispo(5);// Chamada do procedimento
            break;

        case 'T':
        case 't':
            printf("Você escolheu a torre\n");
            movertorre(5);// Chamada do procedimento

            break;

        case 'R':
        case 'r':
            printf("Você escolheu a rainha\n");
            moverrainha(8);// Chamada do procedimento
            
            break;

        case 'C':
        case 'c':
            printf("Você escolheu o cavalo\n");
            cavalo = 1;
            for (cavalo = 1; cavalo <= 3; cavalo++)// Loop Externo.
            {
                while(cavalo <= 2){// Loop interno.
                    printf("Baixo\n",cavalo);
                    cavalo++;
                }
                
                    printf("Direita\n", cavalo);
            }         
                       
            break;

        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}