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

void soma_matriz(int n, int i, int j, int matriz[][3], double sum)
{
    if(i == n)
    {
        printf("%.2lf ", sum / 9);
    }
    else
    {
        if(j < n)
        {
            sum = sum + matriz[i][j];
            return soma_matriz(n, i, j + 1, matriz, sum);
        }
        else
        {
            return soma_matriz(n, i + 1, 0, matriz, sum);
        }
    }
}

void maior_valor(int n, int i, int j, int matriz[][3], int maior)
{
    if(i == n)
    {
        printf("%d ", maior);
        if(maior > 0)
        {
            printf("1 ");
        }
        else if(maior == 0)
        {
            printf("0 ");
        }
        else
        {
            printf("-1 ");
        }
    }
    else
    {
        if(j < n)
        {
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                return maior_valor(n, i, j + 1, matriz, maior);
            }
            else
            {
                return maior_valor(n, i, j + 1, matriz, maior);
            }
        }
        else
        {
            return maior_valor(n, i + 1, 0, matriz, maior);
        }
    }
}

void principal(int n, int i, int j, int matriz[][n], int sum)
{
    if(i == n)
    {
        printf("%d", sum);
    }
    else
    {
        sum = sum + matriz[i][i];
        principal(n, i + 1, j + 1, matriz, sum); 
    }
}

int main()
{
    int matriz[3][3];
    ler_matriz(3, 3, 0, 0, matriz);
    soma_matriz(3, 0, 0, matriz, 0);
    maior_valor(3, 0, 1, matriz, matriz[0][0]);
    principal(3, 0, 0, matriz, 0);
    return 0;
}