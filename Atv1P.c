//Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.
//Mostre as informações solicitadas de cada pessoa e informe:
//A maior altura e a menor altura.
//O maior peso e menor peso;
//A maior idade e a menor idade.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    int linha = 5;
    char nome [linha] [250];
    int idade [linha], velho = INT_MIN, novo = INT_MAX;
    float peso [linha], pesado = 0, leve = 999;
    float altura [linha], alto = 0, baixo = 999;
    int i;

    //Solicitando Dados
    for ( i = 0; i < linha; i++)
    {
        printf("Digite o %iº nome: ",i + 1);
        gets(nome[i]);

        printf("Digite sua idade: ");
        scanf("%i",&idade[i]);

        printf("Digite seu peso: ");
        scanf("%f",&peso[i]);

        printf("Digite sua altura: ");
        scanf("%f",&altura[i]);

        fflush(stdin);

        velho = idade[i] > velho ? idade[i] : velho;
        novo = idade[i] < novo ? idade[i] : novo;
        
        pesado = peso[i] > pesado ? peso[i] : pesado;
        leve = peso[i] < leve ? peso[i] : leve;

        alto = altura[i] > alto ? altura[i] : alto;
        baixo = altura[i] < baixo ? altura[i] : alto;

    }
    
    system("cls || clear");
    printf("Realizando Operações");
    for ( i = 0; i < 3; i++)
    {
        sleep(1);
        printf(".");
    }
    system("cls || clear");

    for ( i = 0; i < linha; i++)
    {
        printf("%iº pessoa: %s \n",i + 1, nome[i]);
        printf("idade: %i \n", idade[i]);
        printf("peso: %.1f \n", peso[i]);
        printf("altura: %.2f \n", altura[i]);
        printf("-------------------------\n");
    }

    printf("O mais velho: %i \n",velho);
    printf("O mais novo: %i \n",novo);
    printf("O mais pesado: %.1f \n",pesado);
    printf("O mais leve: %.1f \n",leve);
    printf("O mais alto: %.2f \n",alto);
    printf("O mais baixo: %.2f \n",baixo);
    
    
    


return 0;
}