#include <stdio.h>

int main() {
    printf("Jogo de Xadrez!\n");
    // Torre: Move-se 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    int t;
    for (t = 1; t <= 5; t++) {
        printf("Direita\n");
    }

    // Bispo: Move-se 5 casas na diagonal para cima e à direita (usando while)
    printf("\nMovimento do Bispo:\n");
    int b = 1;
    while (b <= 5)
        {
        printf("Cima, Direita\n");
        b++;
    }

    // Rainha: Move-se 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

    return 0;
}
