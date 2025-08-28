#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    printf("---------------------------\n");
    printf("Desafio Batalha Naval - Nivel Novato\n");
    int tabuleiro[5][5] = {0}; // Inicializa o tabuleiro com 0 (vazio)

    // Posiciona um navio vertical (3 partes) na coluna 1, linhas 0 a 2
    tabuleiro[0][1] = 1;
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;

    // Posiciona um navio horizontal (2 partes) na linha 3, col 0 a 1
    tabuleiro[3][0] = 1;
    tabuleiro[3][1] = 1;

    // Exibe as coordenadas dos navios
    printf("Navio Vertical: (0,1), (1,1), (2,1)\n");
    printf("Navio Horizontal: (3,0), (3,1)\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    printf("---------------------------\n");
    printf("\nDesafio Batalha Naval - Nivel Aventureiro\n");
    int tabuleiro10x10[10][10] = {0}; // Inicializa o tabuleiro 10x10 com 0 (vazio)

    // Posiciona navios no tabuleiro 10x10
    // Navio vertical (3 partes) na coluna 2, linhas 0 a 2
    tabuleiro10x10[0][2] = 3;
    tabuleiro10x10[1][2] = 3;
    tabuleiro10x10[2][2] = 3;

    // Navio horizontal (2 partes) na linha 4, col 0 a 1
    tabuleiro10x10[4][0] = 3;
    tabuleiro10x10[4][1] = 3;

    // Navio diagonal (3 partes) da posição (6,6) a (8,8)
    tabuleiro10x10[6][6] = 3;
    tabuleiro10x10[7][7] = 3;
    tabuleiro10x10[8][8] = 3;

    // Navio diagonal (2 partes) da posição (1,8) a (2,9)
    tabuleiro10x10[1][8] = 3;
    tabuleiro10x10[2][9] = 3;

    // Exibe o tabuleiro 10x10
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro10x10[i][j]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    printf("---------------------------\n");
    printf("\nDesafio Batalha Naval - Nivel Mestre\n");
    int habilidadeCone[5][5] = {0};
    int habilidadeCruz[5][5] = {0};
    int habilidadeOctaedro[5][5] = {0};

    // Preenche a habilidade em cone
    habilidadeCone[0][2] = 1;
    habilidadeCone[1][1] = 1; habilidadeCone[1][2] = 1; habilidadeCone[1][3] = 1;
    habilidadeCone[2][0] = 1; habilidadeCone[2][1] = 1; habilidadeCone[2][2] = 1; habilidadeCone[2][3] = 1; habilidadeCone[2][4] = 1;

    // Preenche a habilidade em cruz
    habilidadeCruz[0][2] = 1;
    habilidadeCruz[1][2] = 1;
    habilidadeCruz[2][0] = 1; habilidadeCruz[2][1] = 1; habilidadeCruz[2][2] = 1; habilidadeCruz[2][3] = 1; habilidadeCruz[2][4] = 1;
    habilidadeCruz[3][2] = 1;
    habilidadeCruz[4][2] = 1;

    // Preenche a habilidade em octaedro
    habilidadeOctaedro[0][2] = 1;
    habilidadeOctaedro[1][1] = 1; habilidadeOctaedro[1][2] = 1; habilidadeOctaedro[1][3] = 1;
    habilidadeOctaedro[2][2] = 1;
    habilidadeOctaedro[3][1] = 1; habilidadeOctaedro[3][2] = 1; habilidadeOctaedro[3][3] = 1;
    habilidadeOctaedro[4][2] = 1;

    // Exibe as habilidades

    printf("Habilidade Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidadeCone[i][j]);
        }
        printf("\n");
    }
    
    printf("Habilidade Octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidadeOctaedro[i][j]);
        }
        printf("\n");
    }

    printf("Habilidade Cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidadeCruz[i][j]);
        }
        printf("\n");
    }

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
