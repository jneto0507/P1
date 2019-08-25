#include <stdio.h>

int main ()
{
    double l, v;
    char c, A, G, D;
    scanf("%lf %c", &l, &c);
    if (l <= 20.0 && c == A)
    {
        v = (1.90 * 0.97) * l;
    }
    else if (l > 20.0 && c == A)
    {
        v = (1.90 * 0.95) * l;
    }
    else if (l <= 20.0 && c == G)
    {
        v = (2.50 * 0.96) * l;
    }
    else if (l > 20.0 && c == G)
    {
        v = (2.50 * 0.94) * l;
    }
    else if (l <= 25.0 && c == D)
    {
        v = 1.66 * l;
    }
    else if (l > 25.0 && c == D)
    {
        v = (1.66 * 0.96) * l;
    }
    printf("R$ %.2lf\n", v);
    return 0;   
}