#include <stdio.h>

int loop(int cont, int cont1, int cont2, int res, int ind)
{
    int p, c;
    scanf("%d %d", &p, &c);    
    if(c >= res)
    {
        ind = cont;
        res = c;
    }
    if(p >= 100)
    {
        cont1 = cont1 + 1;
    }
    if(c >= 5)
    {
        cont2 = cont2 + 1;
    }
    if(cont == 6)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", cont1, cont2);
        return ind;
    }
    return loop(cont + 1, cont1, cont2, res, ind);

}

int main()
{
    int d = loop(0, 0, 0, 0, 0);
        if(d == 0)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        }
        else if(d == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        else if(d == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: TERçA\n");
        }
        else if(d == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        else if(d == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        else if(d == 5)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        else if(d == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO");
        }
    return 0;
}