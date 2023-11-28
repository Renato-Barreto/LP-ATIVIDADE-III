//Fa�a um programa que fa�a o cadastro de 5 alunos em uma escola, armazenando seus dados como: nome,
//idade e  3 notas  para cada aluno. 
//Ao final, mostre todos os dados dos alunos como: nome, idade, as notas e a m�dia. 
//Ap�s calcular a m�dia, verifique para cada aluno se este estar� aprovado (m�dia maior ou igual a 7,0), 
//em recupera��o (m�dia menor que 7,0 e maior ou igual a 5,0) ou reprovado (m�dia menor que 5,0) 
//com base nestes crit�rios.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Vari�veis
    int linha = 5;
    int coluna = 3;
    char nome [linha] [250], situacao [linha] [250];
    float notas [linha] [coluna], media [linha], soma;
    int idade [linha];
    int i,j;

    //Solicitando Dados
    for ( i = 0; i < linha; i++)
    {
        printf("Digite o %i� nome: ", i + 1);
        gets(nome[i]);

        printf("Digite sua idade: ");
        scanf("%i",&idade[i]);

        for (j = 0; j < coluna; j++)
        {
            printf("Digite a %i� nota: ", j + 1);
            scanf("%f",&notas[i][j]);
            soma += notas[i][j];
        }
        //Calculando M�dia
        printf("-------------------\n");
        media[i] = soma / coluna;
        soma = 0;
        fflush(stdin);

        //Avaliando Situa��o
        if (media[i] >= 7)
        {
            strcpy(situacao[i], "Aprovado");
        } else if (media[i] < 7 && media[i] >= 5)
        {
            strcpy(situacao[i], "Recupera��o");
        } else {
            strcpy(situacao[i], "Reprovado");
        }
    }

    system("cls || clear");

    for ( i = 0; i < linha; i++)
    {
        printf("%i� Aluno: %s \n", i + 1, nome[i]);
        printf("Idade: %i \n", idade[i]);
        for ( j = 0; j < coluna; j++)
        {
            printf("%i� nota: %.1f \n", j + 1,notas[i][j]);
        }
        printf("M�dia: %.1f \n", media[i]);
        printf("Situa��o: %s \n\n", situacao[i]);
    }

    return 0;
}
    
