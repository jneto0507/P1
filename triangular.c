#include <stdio.h>

int tri(int n, int i)
{
    if((i * (i + 1) * (i + 2)) == n)
    {
        printf("%d * %d * %d = %d\nVerdadeiro\n", i, i + 1, i + 2, n);
        return 0;
    }
    if ((i * (i + 1) * (i + 2)) > n)
    {
        printf("Falso\n");
        return 0;        
    }
    else
    {
        tri(n, i + 1);
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    tri(n, 1);
    return 0;
}