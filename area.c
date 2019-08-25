#include <stdio.h>

int main()
{
    double r, a;
    scanf("%lf", &r);
    a = (3.14159 * r * r) / 10000;
    printf("Area = %.4lf\n", a);
    return 0;
}