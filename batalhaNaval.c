#include <stdio.h>
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define TAMANHO 10
#define TAM_NAVIO_H 3 // Tamanho do navio na horizontal
#define TAM_NAVIO_V 3 // Tamanho do navio na vertical
#define TAM_NAVIO_DD 3 // Tamanho do navio na diagonal direita
#define TAM_NAVIO_DE 4 // Tamanho do navio na diagonal esquerda
int main() {
    // NIVEL NOVATO TEMA 4
    // Declara a variável para armazenamento de tabuleiro
    int tabuleiro [TAMANHO][TAMANHO];

    // adiciona o valor 0 para todas as posições do tabuleiro
    // sendo 0 = água
    for (int i = 0; i<TAMANHO;i++){
        for (int j = 0; j<TAMANHO; j++){
            tabuleiro[i][j] = 0;
        }
    }
    // Imprime o tabuleiro só com 0 (água)
    for (int i = 0; i<TAMANHO;i++){
        for (int j = 0; j<TAMANHO; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Adiciona o Navio de tamanho 3 na Horizontal
    for (int i=0; i<TAM_NAVIO_H; i++){
        for (int j=0; j<TAM_NAVIO_H; j++){
            if(tabuleiro[1+j][1]==0){
                tabuleiro[1+j][1] = 3;
            }
            
        }
    }
    // Adiciona o Navio de tamanho 3 na Vertical
    for (int i=0; i<TAM_NAVIO_V; i++){
        for (int j=0; j<TAM_NAVIO_V; j++){
            if(tabuleiro[1][3+j]==0){
                tabuleiro[1][3+j] = 3;
            } else{
                break;
            }
            
        }
    }
    // Adiciona o navio na diagonal
    for (int i=0; i<TAM_NAVIO_DD; i++){
        for (int j=0; j<TAM_NAVIO_DD; j++){
            if(tabuleiro [3+j][3+j]==0){
                tabuleiro[3+j][3+j] = 3;
            } else{
                break;
            }
            
        }
    }
     // Adiciona o navio na outra diagonal
     for (int i=0; i<TAM_NAVIO_DE; i++){
        for (int j=0; j<TAM_NAVIO_DE; j++){
            if(tabuleiro[0+j][9-j]== 0){
                tabuleiro[0+j][9-j] = 3;
            } else{
                break;
            }
            
        }
    }
    printf("\n");
    for (int i = 0; i<TAMANHO;i++){
        for (int j = 0; j<TAMANHO; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

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
