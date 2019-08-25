#include <stdio.h>

int main()
{
    int a, b, c, d, p1, p2, dp;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    p1 = a * b;
    p2 = c * d;
    dp = p1 - p2;
    printf("DIFERENCA = %d\n", dp);
    return 0;
}