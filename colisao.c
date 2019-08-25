#include <stdio.h>

void mapa(int n, int m, int i, int j, int matriz[][m], char array[], int cont, int nc)
{
    if(cont < nc)
    {
        if(array[cont] == 'C')
        {
            if(matriz[i - 1][j] == 0)
            {
                mapa(n, m, i, j, matriz, array, cont + 1, nc);
            }
            else
            {
                mapa(n, m, i - 1, j, matriz, array, cont + 1, nc);
            } 
        }
        else if(array[cont] == 'D')
        {
            if(matriz[i][j + 1] == 0)
            {
                mapa(n, m, i, j, matriz, array, cont + 1, nc);
            }
            else
            {
                mapa(n, m, i, j + 1, matriz, array, cont + 1, nc);
            } 
        }
        else if(array[cont] == 'E')
        {
            if(matriz[i][j - 1] == 0)
            {
                mapa(n, m, i, j, matriz, array, cont + 1, nc);
            }
            else
            {
                mapa(n, m, i, j - 1, matriz, array, cont + 1, nc);
            } 
        }  
        else if(array[cont] == 'B')
        {
            if(matriz[i + 1][j] == 0)
            {
                mapa(n, m, i, j, matriz, array, cont + 1, nc);
            }
            else
            {
                mapa(n, m, i + 1, j, matriz, array, cont + 1, nc);
            } 
        }
    }
    else
    {
        printf("(%d,%d)\n", i, j);
    } 
}

int main()
{
    int n, m, i, j, nc, inicialI, inicialJ;
    
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    for(i = 0; i < n; i ++)
        {
            for(j = 0; j < m; j++)
            {
                scanf("%d", &matriz[i][j]);
            }                               
        }   
    scanf("%d", &nc);
    char array[nc];
    for(i = 0; i < nc; i++)
    {
        scanf("%c", array[i]);
    }
    scanf("%d %d", &inicialI, &inicialJ);
    mapa(n, m, inicialI, inicialJ, matriz, array, 0, nc);
}