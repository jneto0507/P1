#include <stdio.h>

int main ()
{
    double a, b;
    scanf("%lf", &a);
    if (a > 500)
    {
        printf("%.2lf\n", a * 1.1);
    }
    else if (a <= 500 && a > 300)
    {
        printf("%.2lf\n", a * 1.07);
    }
    else
    {
        printf("%.2lf\n", a * 1.05);
    }
    return 0;
}