#include <stdio.h>

int main() 
{
    double a, b, c, media;
    
    scanf("%lf  %lf %lf", &a, &b, &c);
    
    media = (a + b + c) / 3.0;

    if (media < 3)
    {
        printf("reprovado\n");
    }
    if (3 <= media < 7)
    {
        printf("prova final\n");
    }       
    if (media >= 7)
    {
        printf("aprovado\n");
    }
    return 0;
}   