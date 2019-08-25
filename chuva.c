#include <stdio.h>

void ler_matriz1(int n, int m, int i, int j, int matriz1[][m])
{
    if(i < n)
    {
        if(j < m)
        {
            scanf("%d", &matriz1[i][j]);
            ler_matriz1(n, m, i, j + 1, matriz1);
        }
        else
        {
            ler_matriz1(n, m, i + 1, 0, matriz1);
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
            ler_matriz2(n, m, i, j + 1, matriz2);
        }
        else
        {
            ler_matriz2(n, m, i + 1, 0, matriz2);
        }
    }
}

void check(int n, int i, int j, int matriz1[][n], int matriz2[][n])
{
    if(i < n)
    {
        if (j < n)
        {
            if(j == n - 1)
            {
                printf("%d\n", matriz1[i][j] + matriz2[i][j]);
                check(n, i + 1, 0, matriz1, matriz2);
            }
            else
            {
                printf("%d ", matriz1[i][j] + matriz2[i][j]);
                check(n, i, j + 1, matriz1, matriz2);
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int matriz1[n][n];
    ler_matriz1(n, n, 0, 0, matriz1);
    int matriz2[n][n];
    ler_matriz2(n, n, 0, 0, matriz2);
    check(n, 0, 0, matriz1, matriz2);
    return 0;
}