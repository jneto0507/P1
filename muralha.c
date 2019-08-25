#include <stdio.h>

int check(int n, int i, int x, int y, int cont, char res)
{
    char c;
    scanf("%c", &c);
    if(c == 'D')
    {
        x = x + 1;
    }
    else
    {
        y = y + 1;
    }
    if(res == c)
    {
        return loop(n, i + 1, x, y, cont + 1, res);
    }
    else
    {
        return loop(n, i + 1, x, y, cont, res);
    }
}

int loop(int n, int i, int x, int y, int cont, char res)
{
    if(i < n)
    {
        char c;
        scanf("%c", &c);
        if(c == 'D')
        {
            x = x + 1;
        }
        else
        {
            y = y + 1;
        }
        if(y - x == 0)
        {
            res = c;
            check(n, i + 1, x, y, cont, res);
        }
        else
        {
            return loop(n, i + 1, x, y, cont, res);
        }       
    }
    else
    {
        return cont;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", loop(n, 0, 0, 0, 0, 0));
    return 0;
}