#include <stdio.h>

int fat(int a)
{
    if(a <= 1)
    {
        return 1;
    }
    else
    {
        return a * fat(a - 1);
    }
}


void loop(int i, int sum, int n)
{
    if(n == 0)
    {
        printf("0.00\n");
        return;
    }
    if(n == i)
    {
        printf("%d")
    }
}

int main()
{
    int n;
    loop(0, 0, n);
    return 0;
}