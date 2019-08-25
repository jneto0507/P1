#include <stdio.h>

int main ()
{
    double s1, a, s2;
    int pr;
    scanf("%lf", &s1);
    if (s1 <= 280)
    {
        s2 = s1 * 1.2;
        pr = 20;
        a = s2 - s1;
    }
    if (s1 > 280 && s1 <= 700)
    {
        s2 = s1 * 1.15;
        pr = 15;
        a = s2 - s1;
    }
    if (s1 > 700 && s1 <= 1500)
    {
        s2 = s1 * 1.1;
        pr = 10;
        a = s2 - s1;
    }
    if (s1 >= 1500)
    {
        s2 = s1 * 1.05;
        pr = 5;
        a = s2 - s1;
    }
    printf("%.2lf\n", s1);
    printf("%d\n", pr);
    printf("%.2lf\n", a);
    printf("%.2lf\n", s2);
    return 0;    
}