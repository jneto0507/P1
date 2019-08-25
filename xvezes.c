#include <stdio.h>

int check(int i, int array[], int n, int var)
{
    if(i < n)
    {   
        if(array[i] == var)
        {
            return 1 + check(i + 1, array, n, var);
        }
        else
        {
            return check(i + 1, array, n, var);
        }                
    }
    else
    {
        return 0;
    }
}

void ler_array(int i, int array[], int n)
{
    if (i < n)
    {
        scanf("%d", &array[i]);
        ler_array(i + 1, array, n);
    }
}

int main()
{   
    int array[10];
    ler_array(0, array, 10);
    int n;
    scanf("%d", &n);
    printf("%d\n", check(0, array, 10, n));
    return 0;
}