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

int check(int n, int i, int j, int matriz[][n])
{
    if(i < n)
    {
        if(j < i)
        {
            if(matriz[i][j] != 0)
            {
                return 1;
            }
            else
            {
                return check(n, i, j + 1, matriz);
            }  
        }
        else
        {
            return check(n, i + 1, 0, matriz);
        }
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int matriz[n][n];
    ler_matriz(n, n, 0, 0, matriz);
    int a = check(n, 0, 0, matriz);
    if(a == 0)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;   
}