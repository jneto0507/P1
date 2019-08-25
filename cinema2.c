#include <stdio.h>

void loop(int cont)
{
    int n;
    scanf("%d ", &n);
    if(n == 111)
    {
        printf("%d", cont);
    }
    else
    {
        char s;
        scanf("%c ", &s);
        if(s == 'f' || s == 'F')
        {
            if(n <= 10 || n > 60)
            {
                cont = cont + 1;
            }
        }
        else if(s == 'm' || s == 'M')
        {
            if(n < 10 || n > 60)
            {
                cont = cont + 1;
            }
            else if(n > 25 && n < 35)
            {
                cont = cont + 1;
            }
        }
        loop(cont);
    }
}

int main()
{
    loop(0);
    return 0;
}