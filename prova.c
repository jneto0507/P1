#include <stdio.h>

void ler_gabarito(char gabarito[], int i)
{
    if(i < 10)
    {
        scanf("%c", &gabarito[i]);
        ler_gabarito(gabarito, i + 1);        
    }
}

void ler_prova(char prova[], int i)
{
    if(i < 10)
    {
        scanf("%c", &prova[i]);
        ler_prova(prova, i + 1);        
    }
}

double comp(char gabarito[], char prova[], int i)
{
    if(i < 10)
    {
        if(prova[i] == gabarito[i])
        {
            return 1 + comp(gabarito, prova, i + 1);
        }
        else
        {
            return comp(gabarito, prova, i + 1);
        }
    }
    else
    {
        return 0;
    }
}

void check(int array[], int i, int n,int atual, double maiornota, int ind, int cont)
{
    if(atual <= n)
    {
        if(i < n)
        {   
            if(array[i] == array[atual])
            {
                return check(array, i + 1, n, atual, maiornota, ind, cont + 1);
            } 
            else
            {
                return check(array, i + 1, n, atual, maiornota, ind, cont);
            }
        }
        else
        {
            if(cont > ind)
            {
                ind = cont;
                maiornota = array[i];
                return check(array, 0, n, atual + 1, maiornota, ind, 0);
            }
        }
    }
    else
    {
        printf("%.1lf", maiornota);
    }
}

void loop(char gabarito[], double cont, int i, int array[])
{
    int aluno;
    scanf("%d ", &aluno);
    if(aluno != 9999)
    {
        char prova[10];
        ler_prova(prova, 0);
        double nota = comp(gabarito, prova, 0);
        printf("%d %.1lf\n", aluno, nota);
        if(nota >= 6)
        {
            cont = cont + 1;
        }
        array[i] = nota;
        loop(gabarito, cont, i + 1, array);
    }
    else
    {
        printf("%.1lf%%\n", (cont / (float)i) * 100);
        check(array, 0, i, 0, 0, 0, 0);
    }
    
}

int main()
{
    char gabarito[10];
    double array[255];
    ler_gabarito(gabarito, 0);
    loop(gabarito, 0, 0, array);
    return 0;
}