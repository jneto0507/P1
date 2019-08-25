#include <stdio.h>

int fatorial(int a)
{
    if(a <= 1)
    {
        return 1;
    }
    else
    {
        return a * fatorial(a - 1);
    }
}

int loop(int i, int n, double b, double sum)
{
    if(i == n)
    {
        printf("%.2lf", sum);
    }
    else
    {
       if(i % 2 == 0)
        {
            sum = sum + (fatorial(i) / b);
            loop(i + 1, n, (b * 2) + 1, sum);
        }
        else
        {
            sum = sum - (fatorial(i) / b);
            loop(i + 1, n, (b * 2) + 1, sum);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    loop(0, n, 1, 0);
}