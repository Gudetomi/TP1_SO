#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"funcoes.h"


void analiseLine()
{//função responsável por fazer a leitura dos comandos passados para o usuário
    char buffer[512];//recebe a linha de comandos
    char *comands;//recebe os comandos após serem separados
    comands= (char**)malloc(1 *sizeof(char*));

    printf("$");
    scanf("%s",buffer);//Faz a leitura da linha de comando
    comands[parametersNumber]=strtok(buffer," ");
    while (comands!=NULL)
    {
        control++;
        if(control==parametersNumber)
        {//Means the matrix is full
            comands=(char *) realloc(comands,1);
            parametersNumber++;
        }
        comands[control]=strtok(NULL," ");
        printf("%s",comands[control]);
    }

}
void executeLine()
{//

}
