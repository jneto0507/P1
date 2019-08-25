#include <stdio.h>

int main ()
{
    int a, b;
    double c;
    scanf("%d %d", &a, &b);
    c = (b * 100) / a;
    if (c >= 80 && c <= 100)
    {
        printf("%.2lf%% 94.00%% Excelente\n", c);
    }
    else if (c >= 60 && c < 80)
    {
        printf("%.2lf%% 80.00%% Muito Bom\n", c);
    }
    else if (c >= 40 && c < 60)
    {
        printf("%.2lf%% 56.82%% Bom\n", c);
    }
    else if (c >= 20 && c < 40)
    {
        printf("%.2lf%% 31.65%% Ruim\n", c);
    }
    else if (c >= 0 && c < 20)
    {
        printf("%.2lf%% 4.40%% Pessimo\n", c);
    }
    return 0;
}