#include <stdio.h>

void check(int i, int array[], int n, int res, int ind)
{
    if(i < n)
    {   
        if(array[i] > array[ind])
        {
            ind = i;
        }     
        check(i + 1, array, n, res, ind);
    }
    else
    {
        res = array[n - 1];
        array[n - 1] = array[ind];
        array[ind] = res;
        if(n > 1)
        {
            check(1, array, n - 1, 0, 0);
        }
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
    int array[6];
    ler_array(0, array, 6);
    check(1, array, 6, 0, 0);
    printf("%d\n%d\n", array[0], array[5]);
    return 0;
}