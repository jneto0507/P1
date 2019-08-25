#include <stdio.h>

void ler_array(int i, int array[], int n)
{
    if (i < n)
    {
        scanf("%d", &array[i]);
        ler_array(i + 1, array, n);
    }
}

void check(int i, int array, int n)
{
    
}

void loop(int i, int array[], int n, int a, int b, int sum1, int sum2)
{
    if(i == n)
    {
        if(sum1 > sum2)
        {
            printf("%d\n%d\n%d\n", a, b, sum1);
        }
        else
        {
            printf("%d\n%d\n%d\n", a, b, sum2);
        }
    }
    else
    {
        if(array[i] % 2 == 0)
        {
            
            loop(i + 1, array, n, a + 1, b, sum1 + array[i], sum2);
        }
        else
        {
            loop(i + 1, array, n, a, b + 1, sum1, sum2 + array[i]);
        }
        
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    ler_array(0, array, n);
    loop(0, array, n, 0, 0, 0, 0);
    return 0;
}