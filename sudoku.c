#include <stdio.h>

int checar_linhas(int n, int matriz[][n], int retorno, int valor)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            valor = valor * matriz[i][j];
        }
        if(valor == 362880)
        {
            retorno = retorno + 1;
            break;
        }
        valor = 1;
    }
    return retorno;
}

int checar_matrizes(int n, int matriz[][n], int retorno, int valor)
{
    if()
    {
        
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++)
    {
        int matriz[9][9];
        int j, i2;
        for(i2 = 0; i2 < 9; i2 ++)
        {
            for(j = 0; j < 9; j++)
            {
                scanf("%d", &matriz[i2][j]);
            }
        }
        if(checar_linhas(9, matriz, 0, 1) + checar_matrizes(matriz) > 0)
        {
            printf("Instancia %d\nSIM\n\n", i + 1);
        }
        else
        {
            printf("Instancia %d\nNAO\n\n", i + 1);
        }   
    } 
    return 0;
}