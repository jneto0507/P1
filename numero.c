#include <stdio.h>
#include <string.h>

int main()
{
    char string1[1000000];
    char string2[1000000];
    scanf(" %[^\n] %[^\n]", string1, string2);
    int tam1 = strlen(string1);
    int tam2 = strlen(string2);
    int tamreal;
    if(tam1 > tam2)
    {
        tamreal = tam1 + 1;
    } 
    else
    {
        tamreal = tam2 + 1;
    }
    int valor = 0;
    int res = 0;
    int i;
    int array[tamreal];
    for(i = tamreal - 1; i >= 0; i--)
    {
        valor = (string1[i] - '0') +  (string2[i] - '0');
        array[i] = ((valor + res) % 10);
        res = (valor + res) / 10;       
    }
    for(i = 0; i <= tamreal - 1; i++)
    {
        printf("%d", array[i]);
    }
    return 0;
}