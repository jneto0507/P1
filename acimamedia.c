#include <stdio.h>

int main()
{
    double a, b, c, media, q;
    scanf("%lf %lf %lf", &a, &b, &c);
    media = (a + b + c) / 3.0;
    if (a > media && b > media && c > media)
    {
        printf("3\n");
    }
    else if (a > media && b > media)
    {
        printf("2\n");
    }
    else if (a > media && c > media)
    {
        printf("2\n");
    }
    else if (c > media && b > media)
    {
        printf("2\n");
    }
    else if (a > media)
    {
        printf("1\n");
    }
    else if (b > media)
    {
        printf("1\n");
    }
    else if (c > media)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}