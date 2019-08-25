#include <stdio.h>

int check(int i, int array[], int cont, int n)
{
    if(i < 1000)
    {
        if(n == array[i])
        {
             return check(i + 1, array, cont + 1, n);
        }
        else
        {
            return check(i + 1, array, cont, n);
        }    
    }
    else
    {
        return cont;
    }
    
}

void ler_array(int i, int array[])
{
    if (i < 1000)
    {
        scanf("%d", &array[i]);
        ler_array(i + 1, array);
    }
}

void loop()
{
    int n;
    int array[1000];

    ler_array(0, array);

    if(array[0] != -1)
    {       
    scanf("%d", &n);

    printf("%d appeared %d times\n", n, check(0, array, 0, n));
    loop();
    }
}

int main()
{
    loop();
    return 0;
}