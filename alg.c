#include <stdio.h>

void check(int n, int i)
{
    if(i > 5)
    {
        printf("Entrada incorreta!");
    }
    else if(n == 0)
    {
        printf("O número possui %d algarismos!", i);
    }
    else
    {
        return check(n / 10, i + 1);   
    }
}

int main()
{
    int n;
    scanf("Digite um número com no máximo 5 algarismos: %d", &n);
    check(n, 0);
    return 0;
}