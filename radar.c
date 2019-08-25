#include <stdio.h>

int main()
{
    double vm, vv, m, df;
    scanf("%lf %lf", &vm, &vv);
    df = vv / vm;
    if (df <= 1.2 && df > 1)
    {
        printf("85.13\n4\n");
    }
    else if (df > 1.2 && df <= 1.5)
    {
        printf("127.69\n5\n");
    }
    else if (df > 1.5)
    {
        printf("574.62\n7\n");
    }
    else
    {
        printf("0.00\n0\n");
    }
    return 0;
}