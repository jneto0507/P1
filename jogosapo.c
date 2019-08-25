#include <stdio.h>

int main()
{
    int tab, sapos, n, i, j, jogada;
    scanf("%d", &tab);
    int array[tab];
    scanf("%d %d", &sapos, &n);
    int posicao[sapos];
    for(i = 0; i < tab; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i = 0; i < sapos; i++)
    {
        posicao[i] = 0;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < sapos; j++)
        {
            scanf("%d", &jogada);
            posicao[j] = (posicao[j] + jogada) % tab;
            if(array[posicao[j]] > 0)
            {
                posicao[j] = (posicao[j] + array[posicao[j]]) % tab;
            }
            else if(array[posicao[j]] < 0)
            {
                if((posicao[j] + array[posicao[j]]) < 0)
                {
                    posicao[j] = (((posicao[j] + array[posicao[j]]) % tab) + tab) % tab;
                }
                else
                {
                    posicao[j] = posicao[j] + array[posicao[j]];
                }           
            }
        }
    }
    for(i = 0; i < sapos; i++)
    {
        printf("%d\n", posicao[i]);
    }
    return 0;
}