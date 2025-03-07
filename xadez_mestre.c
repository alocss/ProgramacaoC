#include <stdio.h>

// Função recursiva para o movimento da Torre
void mover_torre(int casas) {
    if (casas == 0) return;  // Condição de parada
    printf("Direita\n");
    mover_torre(casas - 1);  // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void mover_bispo(int casas) {
    if (casas == 0) return;  // Condição de parada
    printf("Cima Direita\n");
    mover_bispo(casas - 1);  // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void mover_rainha(int casas) {
    if (casas == 0) return;  // Condição de parada
    printf("Esquerda\n");
    mover_rainha(casas - 1);  // Chamada recursiva
}

// Função para o movimento do Cavalo com loops simples
void mover_cavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");  // Movimento para cima (2 casas)
    }
    printf("Direita\n");  // Movimento para a direita (1 casa)
}

int main() {
    printf("### Desafio Xadrez! ###\n");

    // Movimento da Torre
    printf("Movimentando a Torre (5 casas para a direita):\n");
    mover_torre(5);
    printf("\n");

    // Movimento do Bispo
    printf("Movimentando o Bispo (5 casas para a diagonal Cima, Direita):\n");
    mover_bispo(5);
    printf("\n");

    // Movimento da Rainha
    printf("Movimentando a Rainha (8 casas para a esquerda):\n");
    mover_rainha(8);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimentando o Cavalo (Duas casas para cima e uma para a direita):\n");
    mover_cavalo();
    printf("\n");

    return 0;
}
