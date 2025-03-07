#include <stdio.h>

int main() {
    printf("### Desafio Xadrez! ###\n");
    int torre = 0;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 0;

    // Movimento da Torre
    printf("Movimentando a Torre (5 casas para a direita):\n");
    // Usando a estrutura de repetição 'for' para a Torre
    for(torre = 0; torre < 5; torre++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo
    printf("Movimentando o Bispo (5 casas para a diagonal Cima, Direita):\n");
    // Usando a estrutura de repetição 'while' para o Bispo
    while(bispo < 5) {
        printf("Cima Direita\n");
        bispo++;
    }
    printf("\n");

    // Movimento da Rainha
    printf("Movimentando a Rainha (8 casas para a esquerda):\n");
    // Usando a estrutura de repetição 'do-while' para a Rainha
    do {
        printf("Esquerda\n");
        rainha++;
    } while(rainha < 8);
    printf("\n");

    // Movimentando o cavalo
    printf("Movimentando o cavalo (Duas casas para baixo e uma casa para a esquerda):\n");

    // Usando o 'for' para o movimento para baixo (2 casas)
    for (cavalo = 0; cavalo < 2; cavalo++) {
        printf("Baixo\n");
    }

    // Usando o 'while' para o movimento para a esquerda (1 casa)
    while(cavalo < 3) {
        printf("Esquerda\n");
        cavalo++;
    }

    return 0;
}
