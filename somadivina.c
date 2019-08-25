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

void ler_matriz2(int n, int m, int i, int j, int matriz2[][m])
{
    if(i < n)
    {
        if(j < m)
        {
            scanf("%d", &matriz2[i][j]);
            ler_matriz(n, m, i, j + 1, matriz2);
        }
        else
        {
            ler_matriz(n, m, i + 1, 0, matriz2);
        }
    }
}

void soma_matriz(int n, int i, int j, int matriz[][n], int matriz2[][n])
{
    if(i < n)
    {
        if(j < n)
        {
            printf("%d\n", matriz[i][j] + matriz2[i][j]);
            soma_matriz(n, i, j + 1, matriz, matriz2);            
        }
        else
        {
            soma_matriz(n, i + 1, 0, matriz, matriz2);
        }
    }
}

void check1()
{

}

void check2()
{
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int matriz[n][n];
    ler_matriz(n, n, 0, 0, matriz);
    int matriz2[n][n];
    ler_matriz2(n, n, 0, 0, matriz2);
    soma_matriz(n, 0, 0, matriz, matriz2);
    return 0;
}