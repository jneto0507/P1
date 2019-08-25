#include <stdio.h>

typedef struct mes
{
    double array[8];
}mes;

void check(mes m[])
{
    int i, j, resind1, resind2;
    double valor;
    valor = 1;
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if(m[i].array[j] < valor)
            {
                resind1 = j;
                resind2 = i;
                valor = m[i].array[j];
            }
        }
    }
    if(m[resind2].array[resind1] > 0.5)
    {
        printf("Proximo ano eu tento denovo...\n");
    }
    else
    {
        if(resind1 == 0)  
        {
            printf("O melhor dia e no Primeiro Sabado ");
        }
        else if(resind1 == 1)  
        {
            printf("O melhor dia e no Primeiro Domingo ");
        }
        else if(resind1 == 2)  
        {
            printf("O melhor dia e no Segundo Sabado ");
        }
        else if(resind1 == 3)  
        {
            printf("O melhor dia e no Segundo Domingo ");
        }
        else if(resind1 == 4)  
        {
            printf("O melhor dia e no Terceiro Sabado ");
        }
        else if(resind1 == 5)  
        {
            printf("O melhor dia e no Terceiro Domingo ");
        }
        else if(resind1 == 6)  
        {
            printf("O melhor dia e no Quarto Sabado ");
        }
        else if(resind1 == 7)  
        {
            printf("O melhor dia e no Quarto Domingo ");
        }
        if(resind2 == 0)
        {
            printf("de Janeiro\n");
        }
        else if(resind2 == 1)
        {
            printf("de Fervereiro\n");
        }
        else if(resind2 == 2)
        {
            printf("de Marco\n");
        }
        else if(resind2 == 3)
        {
            printf("de Abril\n");
        }
        else if(resind2 == 4)
        {
            printf("de Maio\n");
        }
        else if(resind2 == 5)
        {
            printf("de Junho\n");
        }
        else if(resind2 == 6)
        {
            printf("de Julho\n");
        }
        else if(resind2 == 7)
        {
            printf("de Agosto\n");
        }
        else if(resind2 == 8)
        {
            printf("de Setembro\n");
        }
        else if(resind2 == 9)
        {
            printf("de Outubro\n");
        }
        else if(resind2 == 10)
        {
            printf("de Novembro\n");
        }
        else if(resind2 == 11)
        {
            printf("de Dezembro\n");
        }
    }
    
}

int main()
{
    mes m[12];
    int i, j;
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 8; j++)
        {
            scanf("%lf", &m[i].array[j]);
        }
    }
    check(m);
}