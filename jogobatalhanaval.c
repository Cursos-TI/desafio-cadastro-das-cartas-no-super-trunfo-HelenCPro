#include <stdio.h>

// Função para aplicar a habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[10][10], int habilidade[5][5], int linhaCentro, int colunaCentro) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            // Posição real no tabuleiro
            int linhaTabuleiro = linhaCentro - 2 + i;
            int colunaTabuleiro = colunaCentro - 2 + j;

            // Verifica se está dentro do tabuleiro
            if (linhaTabuleiro >= 0 && linhaTabuleiro < 10 && colunaTabuleiro >= 0 && colunaTabuleiro < 10) {
                if (habilidade[i][j] != 0) {
                    tabuleiro[linhaTabuleiro][colunaTabuleiro] = habilidade[i][j];
                }
            }
        }
    }
}

int main() {
    int tabuleiro[10][10] = {
        {3,0,0,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,0,0,0,0},
        {0,0,3,0,3,3,3,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,3,0,0,0,0},
        {0,0,0,0,0,3,0,0,0,0},
        {0,0,0,0,0,3,0,0,0,0},
        {0,0,3,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0},
    };

    int cone[5][5] = {
        {0,0,2,0,0},
        {0,2,2,2,0},
        {2,2,2,2,2},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    int cruz[5][5] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    int octaedro[5][5] = {
        {0,0,0,0,0},
        {0,0,4,0,0},
        {0,4,4,4,0},
        {0,0,4,0,0},
        {0,0,0,0,0}
    };

    // Posição onde será aplicada a habilidade
    int linha1 = 2;
    int coluna1 = 2;

    int linha2 = 5;
    int coluna2 = 5;

    int linha3 = 7;
    int coluna3 = 7;

    // Aplicar habilidade (ex: cone)
    aplicarHabilidade(tabuleiro, cone, linha1, coluna1);
    aplicarHabilidade(tabuleiro, cruz, linha2, coluna2);
    aplicarHabilidade(tabuleiro, octaedro, linha3, coluna3);

    // Mostrar tabuleiro atualizado
    printf("Tabuleiro com habilidade aplicada:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}