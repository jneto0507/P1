#include <stdio.h>

int check(int mult, int a, int b, int cont)
{
    if(a > b)
    {
        if(cont == 0)
        {
            printf("INEXISTENTE\n");
            return 0;
        }
        else
        {
            return 0;
        }  
    }
    if(a % mult == 0)
    {
        printf("%d\n", a);  
        check(mult, a + 1, b, cont + 1);
    }
    else
    {
        check(mult, a + 1, b, cont);
    }
}

int main()
{
    int mult, a, b, cont;
    scanf("%d %d %d", &mult, &a, &b);
    cont = 0;
    check(mult, a, b, cont);
    return 0;
}