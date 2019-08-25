#include <stdio.h>
#include <string.h>

typedef struct bloco
{
    int value, direction;
}bloco;

typedef struct vert
{
    int nmax, mmax;
    char nome[100];
    bloco comandos[100][100];
}vert;

void joguinho(int x, vert v[], int iatual, int jatual, int tabatual, int sum, int parcial[])
{
    printf("iatual: %d jatual: %d tabatual:%d\n", iatual, jatual, tabatual);
    if(iatual == v[tabatual].nmax - 1 && jatual == v[tabatual].mmax - 1)
    {
        int i, j;
        int tam = strlen(v[tabatual].nome);
        int pal = 1;
        for(i = 0, j = tam-1; i < tam/2; i++, j--)
        {
            if(v[tabatual].nome[i] != v[tabatual].nome[j])
            {
                
                pal = 0;
                break;
            }
        }
        if(pal = 0)
        {
            parcial[tabatual] = parcial[tabatual] + v[tabatual].comandos[iatual][jatual].value;
            sum = sum + v[tabatual].comandos[iatual][jatual].value;
            printf("%d\n", sum);
            for(i = 0; i < x; i++)
            {
                printf("%s %d\n",v[i].nome, parcial[i]);
            }
        }
        else
        {
            parcial[tabatual] = parcial[tabatual] + (v[tabatual].comandos[iatual][jatual].value * 2);
            sum = sum + ((v[tabatual].comandos[iatual][jatual].value) * 2);
            printf("%d\n", sum);
            for(i = 0; i < x; i++)
            {
                printf("%s %d\n",v[i].nome, parcial[i]);
            } 
        }
    }
    else
    {
        if(v[tabatual].comandos[iatual][jatual].direction == 0)
        {
            sum = sum + v[tabatual].comandos[iatual][jatual].value;
            parcial[tabatual] = parcial[tabatual] + v[tabatual].comandos[iatual][jatual].value;
            iatual = iatual - 1;
            if(iatual < 0)
            {
                iatual = v[tabatual].nmax - 1;
            }
            joguinho(x, v, iatual, jatual, tabatual, sum, parcial);
        }
        else if(v[tabatual].comandos[iatual][jatual].direction == 1)
        {
            sum = sum + v[tabatual].comandos[iatual][jatual].value;
            parcial[tabatual] = parcial[tabatual] + v[tabatual].comandos[iatual][jatual].value;
            iatual = iatual + 1;
            if(iatual == v[tabatual].nmax)
            {
                iatual = 0;
            }
            joguinho(x, v, iatual, jatual, tabatual, sum, parcial);
        }
        else if(v[tabatual].comandos[iatual][jatual].direction == 2)
        {
            sum = sum + v[tabatual].comandos[iatual][jatual].value;
            parcial[tabatual] = parcial[tabatual] + v[tabatual].comandos[iatual][jatual].value;
            jatual = jatual - 1;
            if(jatual < 0)
            {
                jatual = v[tabatual].mmax - 1;
            }
            joguinho(x, v, iatual, jatual, tabatual, sum, parcial);
        }
        else if(v[tabatual].comandos[iatual][jatual].direction == 3)
        {
            sum = sum + v[tabatual].comandos[iatual][jatual].value;
            parcial[tabatual] = parcial[tabatual] + v[tabatual].comandos[iatual][jatual].value;
            jatual = jatual + 1;
            if(jatual == v[tabatual].mmax)
            {
                jatual = 0;
            }
            joguinho(x, v, iatual, jatual, tabatual, sum, parcial);
        }
        else if(v[tabatual].comandos[iatual][jatual].direction == 4)
        {
            int i, j;
            int tam = strlen(v[tabatual].nome);
            int pal = 1;
            for(i = 0, j = tam-1; i < tam/2; i++, j--)
            {
                if(v[tabatual].nome[i] != v[tabatual].nome[j])
                {
                    
                    pal = 0;
                    break;
                }
            }
            if(pal = 0)
            {
                sum = sum + parcial[tabatual];
                int pos = sum % (v[tabatual].nmax * v[tabatual].mmax);
                tabatual = v[tabatual].comandos[iatual][jatual].value;
                iatual = pos / sum;
                jatual = pos % sum;
                joguinho(x, v, iatual, jatual, tabatual, sum, parcial); 
            }
            else
            {
                int pos = (sum % (v[tabatual].nmax * v[tabatual].mmax));
                tabatual = v[tabatual].comandos[iatual][jatual].value;
                iatual = pos / sum;
                jatual = pos % sum;
                joguinho(x, v, iatual, jatual, tabatual, sum, parcial); 
            } 
        }
    }
}

int main()
{
    int x, n, m, i, j, k;
    scanf("%d", &x);
    vert v[x];
    int parcial[x];
    char res[10];
    int res1[x * 2];
    for(i = 0; i < x; i++)
    {
        scanf("%d %d", &n, &m);
        v[i].nmax = n;
        v[i].mmax = m;
        scanf(" %s", v[i].nome);
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < m; k++)
            {
                if(k == m - 1)
                {
                    scanf(" %[^\n]", res);
                    v[i].comandos[j][k].direction = res[0] - '0';
                    if(res[2] == '-')
                    {
                        if(res[4] != '\0')
                        {
                            v[i].comandos[j][k].value = -(((res[3] - '0') * 10) + (res[4] - '0'));
                        }
                        else
                        {
                            v[i].comandos[j][k].value = -(res[3] - '0');                            
                        }       
                    }
                    else
                    {
                        if(res[3] != '\0')
                        {
                            v[i].comandos[j][k].value = (((res[2] - '0') * 10) + (res[3] - '0'));
                        }
                        else
                        {
                            v[i].comandos[j][k].value = res[2] - '0';                          
                        }  
                    }
                }
                else
                {
                    scanf(" %[^ ]", res);
                    v[i].comandos[j][k].direction = res[0] - '0';
                    if(res[2] == '-')
                    {
                        v[i].comandos[j][k].value = -(res[3] - '0');
                    }
                    else
                    {
                        v[i].comandos[j][k].value = res[2] - '0'; 
                    }
                }
                res[0] = '\0';
            }
        }
    }
    joguinho(x, v, 0, 0, 0, 0, parcial);
    return 0;
} 