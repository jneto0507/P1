#include <stdio.h>

int main()
{
    float a, b, c, media;
    printf("Informe a primeira nota:\n");
    scanf("%f", &a);
    printf("Informe a segunda nota:\n");
    scanf("%f", &b);
    printf("Informe a terceira nota:\n");
    scanf("%f", &c);
    media = (a + b + c) / 3.0;
    if(media >= 7.0)
    {
        printf("Aprovado com media %f\n", media);
    }
    else if(media >= 5.0 && media < 7.0)
    {
        printf("Recuperacao com media %f\n", media);
    }
    else if(media < 5.0)
    {
        printf("Reprovado com media %f\n", media);
    }
    return 0;
}