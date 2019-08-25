#include <stdio.h>

int main()
{
    int p, q;
    double v, vf;
    scanf("%d %d", &p, &q);
    if (p == 1)
    {
        v = 5.30 * q;
    }
    else if (p == 2)
    {
        v = 6.00 * q;
    }
    else if (p == 3)
    {
        v = 3.20 * q;
    }
    else if (p == 4)
    {
        v = 2.50 * q;
    }
    if (q >= 15 || v >= 40)
    {
        vf = v * 0.85;    
    }
    else
    {
        vf = v;
    }
    printf("R$ %.2lf\n", vf);
    return 0;
}