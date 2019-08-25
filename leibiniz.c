#include <stdio.h>

void loop(int i, double a, int n, double sum)
{
    if(i < n)
    {
        if(i % 2 == 0)
        {
            sum = sum + 1 / a;
            loop(i + 1, a + 2, n, sum);
        }
        else
        {
            sum = sum - 1 / a;
            loop(i + 1, a + 2, n, sum);
        }    
    }
    else
    {
        sum = sum * 4;
        int x = (int)sum;
        printf("%d,%.0lf", x, (sum - x) * 100000);
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n == 0)
    {
        printf("0,00\n");
    }
    else
    {
        loop(0, 1, n, 0);
    }
    return 0;
}