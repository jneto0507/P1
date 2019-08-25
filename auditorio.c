#include <stdio.h>

void ler_matriz(int n, int m, int i, int j, int matriz[][m])
{
    if(i < n)
    {
        if(j < m)
        {
            scanf("%d", &matriz[i][j]);
            ler_matriz(n, m, i, j + 1, matriz);
        }
        else
        {
            ler_matriz(n, m, i + 1, 0, matriz);
        }
    }
}

int ordernar_coluna(int m, int j, int matriz[][m], int maior)
{
    if(m >= 1)
    {
        if(j < m)
        {
            if(matriz[0][m] > maior)
            {
                maior = matriz[0][m];
                return ordernar_coluna(m, j + 1, matriz, maior);
            }
            else
            {
                return ordernar_coluna(m, j + 1, matriz, maior);
            }
        }
        else
        {
            if(matriz[0][m - 1] != maior)
            {
                matriz[0][m - 1] = maior;
                return 1 + ordernar_coluna(m - 1, 0, matriz, 0);
            }
            else
            {
                return ordernar_coluna(m - 1, 0, matriz, 0);
            }   
        }
    }
    else
    {
        return 0;
    }
}

int ordernar_linha(int n, int m, int i, int matriz[][m], int maior)
{
    if(n >= 1)
    {
        if(i < n)
        {
            if(matriz[i][0] > maior)
            {
                maior = matriz[i][0];
                return ordernar_linha(n, m, i + 1, matriz, maior);
            }
            else
            {
                return ordernar_linha(n, m, i + 1, matriz, maior);
            }
        }
        else
        {
            if(matriz[0][m - 1] != maior)
            {
                matriz[0][m - 1] = maior;
                return 1 + ordernar_linha(n - 1, m, 0, matriz, 0);
            }
            else
            {
                return ordernar_linha(n - 1, m, 0, matriz, 0);
            }   
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    ler_matriz(n, m, 0, 0, matriz);
    int a = ordernar_coluna(m, 0, matriz, 0) + ordernar_linha(n, m, 0, matriz, 0);
    printf("%d", a);
    return 0;
}