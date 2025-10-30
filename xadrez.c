#include <stdio.h>

// Desafio de Xadrez - MateCheck
void movimentotorre(int casas) {
    if (casas > 0) 
    {
        printf("Direita.\n");
        movimentotorre(casas - 1);
    }       
}

void movimentobispo(int casas) {
    if (casas > 0) 
    {
        printf("Cima, direita.\n");
        movimentobispo(casas - 1);
    }
}

void movimentorainha(int casas) {
    if (casas > 0) 
    {
        printf("Esquerda.\n");
        movimentorainha(casas - 1);
    }
}

int main() {
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Chamada do Movimentação do Bispo

    movimentobispo(5);

    // Chamada do Movimentação da Torre  
    
    movimentotorre(5);

    // Chamada do Movimentação da Rainha

    movimentorainha(8);

    // Movimentação do Cavalo com loops aninhados.
    int i, j;

    for (i = 0, j= 0; i <= 2 && j <= 2; i++, j++)
    {   
        if (j == 0) continue;
        printf("Cima.\n");
        if (j == 1) continue;
        printf("Direita\n");
    }


    // Movimentação do Bispo com loops aninhados.
    for (i = 0; i < 5; i++) {
        printf("Cima.\n");
        for (j = 0; j < 1; j++)
        {
            printf("Esquerda.\n");
        }
    }

    return 0;
}

