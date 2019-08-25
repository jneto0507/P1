#include <stdio.h>

void loop(double sum, int n, int i)
{
    if(i == n)
    {
        printf("%d\n%d\n", sum, sum / 21);
    }
    else
    {
    double q, v;
    scanf("%d %d", &q, &v);
    sum = sum + (q * v);
    loop(sum, n, i + 1);   
    }   
}

int main()
{
    int inicial;
    scanf("%d", &inicial);
    loop(inicial, 3, 0);
    return 0;
}