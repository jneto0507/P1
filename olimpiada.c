#include <stdio.h>

typedef struct pessoa
{
    int idade;
    char sexo, cabelo, olho;
}pessoa;

int ler_struct(pessoa p[], int i)
{
    while(scanf("%d", &p[i].idade) != -1)
    {
        scanf(" %c", &p[i].sexo);
        scanf(" %c", &p[i].cabelo);
        scanf(" %c", &p[i].olho);
        i++;
    }
    return i;
}

void check(pessoa p[], int x, int res)
{
    int i;
    for(i = 0; i < x; i++)
    {
        if(p[i].idade > res)
        {
            res = p[i].idade;
        }
    }
    printf("Mais velho: %d\n", res);
}

void check2(pessoa p[], int x, double cont)
{
    int i;
    for(i = 0; i < x; i++)
    {
        if(p[i].olho == 'v' && p[i].cabelo == 'l' && p[i].sexo == 'f' && p[i].idade >= 18 && p[i].idade <= 35)
        {
            cont++;
        }
    }
    printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2lf%%", ((cont/((float)x - 1)) * 100));
}

int main()
{
    pessoa p[100];
    int i = ler_struct(p, 0);
    check(p, i, 0);
    check2(p, i, 0);
    return 0;
}