#include <stdio.h>
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define TAMANHO 10
#define TAM_NAVIO_H 3 // Tamanho do navio na horizontal
#define TAM_NAVIO_V 3 // Tamanho do navio na vertical
#define TAM_NAVIO_DD 3 // Tamanho do navio na diagonal direita
#define TAM_NAVIO_DE 4 // Tamanho do navio na diagonal esquerda
#define TAM_HAB_L 3 // Tamanho da linha da habilidade
#define TAM_HAB_C 5 // Tmanho da coluna da habilidade 
void imprimirTabuleiro(int tabuleiro [TAMANHO][TAMANHO]){
    // Imprime o cabeçalho das colunas (A B C D ...)
    printf("  ");  // Espaço para alinhar com os números das linhas
    for (int letra = 0; letra < TAMANHO; letra++) {
        printf(" %c", 'A' + letra);
    }
    printf("\n");
    for (int i = 0; i<TAMANHO;i++){
        printf("%d| ",i);
        for (int j = 0; j<TAMANHO; j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
}
int main() {
    // NIVEL NOVATO TEMA 4
    // Declara a variável para armazenamento de tabuleiro
    int tabuleiro [TAMANHO][TAMANHO];
    int cone[TAM_HAB_L][TAM_HAB_C], cruz[TAM_HAB_L][TAM_HAB_C], octaedro[TAM_HAB_L][TAM_HAB_C];

    // adiciona o valor 0 para todas as posições do tabuleiro
    // sendo 0 = água
    for (int i = 0; i<TAMANHO;i++){
        for (int j = 0; j<TAMANHO; j++){
            tabuleiro[i][j] = 0;
        }
    }
    // imprime o tabuleiro
    imprimirTabuleiro(tabuleiro);
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
    // imprime o tabuleiro
    imprimirTabuleiro(tabuleiro);
    // Preenche a matriz de cone com 0
    for(int i=0; i<TAM_HAB_L; i++){
        for(int j=0; j<TAM_HAB_C; j++){
            cone[i][j] = 0;
        }
    }
   
     // Preencher a matriz com 1 em formato de cone, começando no meio da primeira linha
    for (int i = 0; i < TAM_HAB_L; i++) {
        for (int j = TAM_HAB_C/2 - i; j <= TAM_HAB_C/2 + i; j++) {
            if (j >= 0 && j < TAM_HAB_C) { // Garantir que o índice j não saia da matriz
                cone[i][j] = 1;
            }
        }
    }

    // Exibir a matriz resultante
    printf("\n");
    for (int i = 0; i < TAM_HAB_L; i++) {
        for (int j = 0; j < TAM_HAB_C; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // Preenche a matriz de CRUZ com 0
    for(int i=0; i<TAM_HAB_L; i++){
        for(int j=0; j<TAM_HAB_C; j++){
            cruz[i][j] = 0;
        }
    }
   
     // Preencher a matriz com 1 em formato de CRUZ
    for (int i = 0; i < TAM_HAB_L; i++) {
        cruz[i][TAM_HAB_C/2] = 1;
        for (int j = 0; j <TAM_HAB_C; j++) {
            cruz[TAM_HAB_L/2][j] = 1;
        }
    }


    // Exibir a matriz resultante
    printf("\n");
    for (int i = 0; i < TAM_HAB_L; i++) {
        for (int j = 0; j < TAM_HAB_C; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
