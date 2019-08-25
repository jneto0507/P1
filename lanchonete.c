#include <stdio.h>

typedef struct pessoa
{
    int idade;
    char sexo, cabelo, olho;
}pessoa;

int ler_struct(pessoa p[], int i)
{
    scanf(" %c", &p[i].sexo);
    scanf(" %c", &p[i].cabelo);
    scanf(" %c", &p[i].olho);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    return 0;
}