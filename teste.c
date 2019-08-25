#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main (int argc, char *argv[], char *envp[]) 
{
    int pid; /* identificador de processo */
    char comandocpu[265] = "ps -e -o pid,pcpu | grep "; //comando da ucp
    char comandoram1[265] = ";echo Memoria | tr '\n' ' ';pmap "; //comando da ram parte 1
    char comandoram2[265] = " | grep -i total"; // comando da ram parte 2
    char pidf[265]; //pid em formato de string
    char cmdcpu[265]; //espaço que cocatena o comando pra monitorar a ucp
    char cmdram[265]; //espaço que cocatena o comando pra monitorar a ram

    pid = fork(); /* replicação do processo fork, separando em "pai" e "filho" */
    sprintf(pidf, "%d" , pid); /* transformação do PID inteiro em string */

    strcpy(cmdcpu, comandocpu); //cópia inicial da ucp
    strcat(cmdcpu, pidf); //junção do comanda de monitoramento da ucp com pid do processo
    strcpy(cmdram, cmdcpu); //cópia inicial da ram
    strcat(cmdram, comandoram1); //junção do comando de monitoramento da ram com o da ucp
    strcat(cmdram, pidf); //junção da primeira parte do monitoramento da ram e da ucp com pid pela 2º vez
    strcat(cmdram, comandoram2); //término do comando do monitoramento da ram com a ucp

    int i = 0;

    if(pid < 0) 
    { /* se o fork não funcionou */
        perror ("Erro: ") ;
        exit (-1) ; /* encerra o processo com código de erro -1 */
    }
    else if(pid == 0) // se sou o processo filho ->> "executar"
    {
        if(strcmp(argv[1], "ucp") == 0) // loop infinito para utilização intensa do processador
        {
            for(;;)
            {}
        }
        else if(strcmp(argv[1], "ucp-mem") == 0) // loop infinito com alocação de memória para utilização intensa de processador e memória
        {
            for(;;)
            {
                malloc(sizeof(char) / 1000);
            }
        }
    }
    else // senão, sou o processo pai (pid > 0) >> "monitorar"
    {
        if(strcmp(argv[1], "ucp") == 0) // Se a verificação pedida for somente a do processador:
        {
            printf(" PID / CPU(%%)\n"); // Exiba na tela "PID / CPU(%)" para formatar as informações
            while(i < 10)
            {
                system(cmdcpu); // Executa no terminal a string que contêm o comando para verifação de uso da cpu
                sleep(1); // Espera 1 segundo para executar o próximo loop
                i++; // Aumenta 1 na contagem de segundos do programa
            }
            strcpy(cmdcpu, "kill "); // Troca o conteúdo da string que executa a verificação por um comando que termina o programa
            strcat(cmdcpu, pidf); // Cocatena o comando de término de programa com o pid do processo "filho"
            system(cmdcpu); // Executa o comando que irá finalizar o processo "filho"
        }
        else if(strcmp(argv[1], "ucp-mem") == 0) // Senão, a verificação será do processador e da memória ram
        {
            printf(" PID / CPU(%%)\n"); // Exiba na tela "PID / CPU(%)" para formatar as informações
            while(i < 10) 
            {
                system(cmdram); // Executa no terminal a string que contêm o comando para verifação de uso da cpu e da memória ram 
                sleep(1); // Espera 1 segundo para executar o próximo loop
                i++; // Aumenta 1 na contagem de segundos do programa
            }
            strcpy(cmdram, "kill "); // Troca o conteúdo da string que executa a verificação por um comando que termina o programa
            strcat(cmdram, pidf); // Cocatena o comando de término de programa com o pid do processo "filho"
            system(cmdram); // Executa o comando que irá finalizar o processo "filho"
        }
    }
    perror (""); /* execve nãoo funcionou */
    printf ("Tchau!\n");
    exit(0) ; /* encerra o processo com sucesso (código 0) */
}