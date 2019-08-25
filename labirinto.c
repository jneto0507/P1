#include <stdio.h>

void labirinto(int n, int m, int matriz[][m], int x, char comandos[], int atuali, int atualj, int i)
{
    if(i < x)
    {
        if(comandos[i] == 'C')
        {
            if(matriz[atuali - 1][atualj] != 0 && atuali - 1 >= 0)
            {
                labirinto(n, m, matriz, x, comandos, atuali - 1, atualj, i + 1);
            }
            else
            {
                labirinto(n, m, matriz, x, comandos, atuali, atualj, i + 1);
            }           
        }
        else if(comandos[i] == 'B')
        {
            if(matriz[atuali + 1][atualj] != 0 && atuali + 1 < n)
            {
                labirinto(n, m, matriz, x, comandos, atuali + 1, atualj, i + 1);
            }
            else
            {
                labirinto(n, m, matriz, x, comandos, atuali, atualj, i + 1);
            }   
        }
        else if(comandos[i] == 'D')
        {
            if(matriz[atuali][atualj + 1] != 0 && atualj + 1 < m)
            {
                labirinto(n, m, matriz, x, comandos, atuali, atualj + 1, i + 1);
            }
            else
            {
                labirinto(n, m, matriz, x, comandos, atuali, atualj, i + 1);
            }   
        }
        else if(comandos[i] == 'E')
        {
            if(matriz[atuali][atualj - 1] != 0 && atualj - 1 >= 0)
            {
                labirinto(n, m, matriz, x, comandos, atuali, atualj - 1, i + 1);
            }
            else
            {
                labirinto(n, m, matriz, x, comandos, atuali, atualj, i + 1);
            }   
        }
    }
    else
    {
        printf("(%d,%d)\n", atuali, atualj);
    } 
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    int q;
    scanf("%d", &q);
    char comandos[q];
    for(i = 0; i < q; i++)
    {
        scanf(" %c", &comandos[i]);
    }
    int iniciali, inicialj;
    scanf("%d %d", &iniciali, &inicialj);
    labirinto(n, m, matriz, q, comandos, iniciali, inicialj, 0);
}