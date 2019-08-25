#include <stdio.h>

int loop(int i, int n)
{
    if(i == n)
    {
        return 0;
    }
    double a, b;
    scanf("%lf %lf", &a, &b);
    if(b / a <= 0.8)
    {
        return 1 + loop(i + 1, n);
    }
    else
    {
        return loop(i + 1, n);
    }
}

int main()
{
    printf("%d",loop(0, 5));
    return 0;
}