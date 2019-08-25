#include <stdio.h>

/*int check(int c, char t, int sum)
{
    if(t == 'P' || t == 'p')
    {
        return sum = sum * (10 * c);
    }
    else
    {
        return sum = sum * (16 * c);;
    }
}*/

int loop(int cont, int sum)
{
    if(cont == 7)
    {
    printf("%d\n%d\n", sum, (sum * 2) / 7);
    return 0;
    }
    int c;
    char t;
    scanf("%d %c", &c, &t);
    if(t == 'P' || t == 'p')
    {
        sum = sum + (10 * c);
    }
    else if(t == 'g' || t == 'G')
    {   
        sum = sum + (16 * c);
    }
    return loop(cont + 1, sum);
}

int main()
{
    loop(0, 0);
    return 0;
}