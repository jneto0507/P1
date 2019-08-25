#include <stdio.h>
#include <math.h>

void loop(int x, int y)
{
    x = abs(x);
    y = abs(y);
    if(y > x)
    {
        printf("%d", x);
    }
    else
    {
        loop(x - y, y);
    }
    
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    loop(x, y);
    return 0;
}