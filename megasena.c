#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char matriz[20][n];
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 21; j++)
        {
            if(scanf(" %c", matriz[i][j]) == '\n')
            {
                break;
            }
        }
    }  
    char gabarito[11];
    scanf(" %[^\n]", gabarito);
    
}