#include <stdio.h>

int main()
{
    int i, n, aux;
    scanf("%d", &n);
    int tocas[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &tocas[i]);
    }
    int visitado[n];
    for(i = 0; i < n; i++)
    {
        visitado[i] = 0;
    }
    int q = 0;
    for(i = 0; i < n; i++)
    {
        if(visitado[i] == 0)
        {
            q++;
            aux = i;
            while(visitado[aux] == 0)
            {
                visitado[aux] = 1;
                aux = tocas[aux];           
            }
        }
    }
    printf("%d", q);
    return 0;
}