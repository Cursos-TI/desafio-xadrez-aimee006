#include <stdio.h>

// Função recursiva para o movimento da torre
void torre(int casas) {

    if (casas > 0) {
        printf("\nTORRE para a DIREITA"); // Direção do movimento da torre
        torre (casas - 1);
    }
    
}

// Função recursiva para o movimento do bispo
void bispo(int casas) {
    
    int casasPercorridas = 0;

    for (int cima = 0; cima < casas; cima++) { // Movimento para cima

        for (int direita = 0; direita < casas; direita++) { // Movimento para a direita
            printf("\nBISPO para CIMA DIREITA"); // Direção do movimento do bispo
            casasPercorridas++;
            
            if (casasPercorridas >= 5) {
                return;
            }
        }

    }

}

// Função recursiva para o movimento da rainha
void rainha(int casas) {

    if (casas > 0) {
        printf("\nRAINHA para a ESQUERDA"); // Direção do movimento da rainha
        rainha(casas - 1);
    }

}

int main() {
    int movimentoL = 1;

    torre(5);
    printf("\n_____________________________________________\n");

    bispo(5);
    printf("\n_____________________________________________\n");

    rainha(8);
    printf("\n_____________________________________________\n");

    // Cavalo se move 2 casas para baixo e 1 casa para a esquerda (movimento em L)
    for (int casas = 0; casas < movimentoL; casas++) {

        for (int direcao = 0; direcao < 3; direcao++) {

            if (direcao < 2) {
                printf("\nCAVALO para CIMA"); // Movimento para cima
                continue;
            }
            printf("\nCAVALO para a DIREITA"); // Movimento para a direita
            break;
            
        }

    }

    printf("\n_____________________________________________\n");

    return 0;
}