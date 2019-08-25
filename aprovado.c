#include <stdio.h>

int main()
{
    double a, b, c, media;
    scanf("%lf %lf %lf", &a, &b, &c);
    media = (a + b + c) / 3.0;
    if(media >= 7.0)
    {
        printf("aprovado\n");
    }
    else if(media < 7.0 && media >= 3)
    {
        printf("prova final\n");
    }
    else
    {
        printf("reprovado\n");
    }
    return 0;
}