#include <stdio.h>

// Função recursiva para a Torre
void torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        torre(casas - 1);
    }
}

// Função recursiva para o Bispo
void bispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        bispo(casas - 1);
    }
}

// Função recursiva para a Rainha
void rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

// Função para o Cavalo com loops aninhados
void cavalo() {
    int casas_vertical = 2;
    int casa_horizontal = 1;
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= casas_vertical; i++) {
        printf("Cima\n");
        if (i == casas_vertical) {
            for (int j = 1; j <= casa_horizontal; j++) {
                printf("Direita\n");
            }
        }
    }
}

// Função para o Bispo com loops aninhados
void bispo_loops(int casas) {
    printf("\nMovimento do Bispo com loops:\n");
    for (int i = 1; i <= casas; i++) {
        printf("Cima, ");
        printf("Direita\n");
    }
}

int main() {
    printf("Jogo de Xadrez!\n");

    // Torre: Move-se 5 casas para a direita (usando recursividade)
    printf("Movimento da Torre:\n");
    torre(5);

    // Bispo: Move-se 5 casas na diagonal para cima e à direita (usando recursividade)
    printf("\nMovimento do Bispo:\n");
    bispo(5);

    // Bispo com loops aninhados
    bispo_loops(5);

    // Rainha: Move-se 8 casas para a esquerda (usando recursividade)
    printf("\nMovimento da Rainha:\n");
    rainha(8);

    // Cavalo: Move-se 2 casas para cima e 1 casa para a direita (usando loops aninhados)
    cavalo();

    return 0;
}
