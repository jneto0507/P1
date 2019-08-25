#include <stdio.h>

int main ()
{
    int a, b, c;
    double n;
    scanf("%d %d %d", &a, &b, &c);
    n = (a + b + c) / 3.0;
    if (n <= 100 && n >= 70)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO\n", n);
    }
    else if (n < 70 && n > 40)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL\n", n);
    }
    else if (n <= 40 && n >= 0)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO\n", n);
    }
    else
    {
        printf("Media invalida\n");
    }
    
    return 0;
}