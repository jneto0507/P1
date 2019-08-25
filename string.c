#include <stdio.h>
#include <string.h>

void imp_string(int a, int nome[])
{
    if(a == 0)
    {
        printf("%c", nome[a - 1]);
    }
    else
    {
        printf("%c", nome[a - 1]);
        imp_string(a - 1, nome);
    }
    
}

int main()
{
    char nome[255];
    scanf("%s", &nome);
    int a = strlen(nome);
    imp_string(a, nome);
    return 0;
}