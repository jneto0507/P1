#include <stdio.h>

void ler_array(int i, int array[], int n)
{
    if (i < n)
    {
        scanf(" %d", &array[i]);
        ler_array(i + 1, array, n);
    }
}

void jogo()

int main()
{   
    int tamanho, jogadores, rodadas;
    scanf("%d %d %d", &tamanho, &jogadores, &rodadas);
    int tabuleiro[tamanho];
    ler_array(0, tabuleiro, tamanho);
    void jogo()
}