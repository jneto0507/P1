#include <stdio.h>

void loop(int res)
{
    int n;
    scanf("%d", &n);
    if(n == 0)
    {
        printf("%d", res);
    }
    else
    {
        if(n > res)
        {
            res = n;
            loop(res);
        }
        else
        {
            loop(res);
        }
    }
}

int main()
{
    loop(0);
    return 0;
}