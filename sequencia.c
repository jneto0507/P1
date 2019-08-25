#include <stdio.h>

void loop(int atual, int i, int linha, int final, int adicao)
{
    if(atual <= final)
    {
        if(i % linha == 0)
        {
            printf("%d\n", atual);
            loop(atual + adicao, i + 1, linha, final, adicao);
        }
        else
        {
            printf("%d ", atual);
            loop(atual + adicao, i + 1, linha, final, adicao);
        }
    }
}

int main()
{
    int linha, final, adicao;
    scanf("%d %d %d", &linha, &final, &adicao);
    loop(1, 1, linha, final, adicao);
    return 0;
}