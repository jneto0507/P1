#include <stdio.h>

int div3(int a, int res, int cont)
{
    if(a == 3)
    {
        printf("1\n");
        return 0;
    }
    if(res == 1)
    {
        if(cont != 0)
        {
            printf("%d\n", cont + 1);
            return 0;
        }
        else
        {
            printf("O numero nao possui divisores multiplos de 3!\n");
            return 0;
        }        
    }
    if(a % res == 0 && res % 3 == 0)
    {
        div3(a, res -1, cont + 1);
    }
    else
    {
        div3(a, res - 1, cont);
    }
}

int main()
{
    int a, cont, res;
    cont = 0;
    scanf("%d", &a);
    res = a - 1;
    div3(a, res, cont);
    return 0;
}