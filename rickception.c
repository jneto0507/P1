#include <stdio.h>

int ception(int n, int t, int sum, int cont)
{
    if(t == cont)
    {
        return sum;
    }
    if(cont % 2 == 0)
    {
        ception(n, t, sum + 3, cont++);
    }
    else
    {
        sum = sum + (n % 5);
        ception(sum, t, sum, cont++);
    }

}

void loop()
{
    int n, t, sum, cont;
    scanf("%d %d", &n, &t);
    sum = n;
    printf("%d\n", ception(n, t, sum, cont));
}

int main()
{
    loop();
    return 0;
}