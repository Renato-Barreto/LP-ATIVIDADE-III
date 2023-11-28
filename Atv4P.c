//Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
//A quantidade de números ímpares;
//A quantidade de números negativos;
//O maior e o menor número;
//A média de números pares;
//A média de números inseridos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    int i = 0;
    int tamanho = 5;
    int numero[tamanho];
    int quantidadePares = 0, quantidadeImpares = 0;
    int totalPares = 0, totalImpares = 0;
    int quantidadeNegativos = 0;
    int totalNegativos = 0;
    int maior = 0, menor = 99999;
    int total = 0, quantidadeTotal = 0;
    float mediaPar, mediaTotal;

    //Solicitando Números
    printf("Solicitando os 5 números inteiros abaixo\n");
    for ( i = 0; i < tamanho; i++)
    {
        printf("Digite o %iº número: ",i+1);
        scanf("%d",&numero[i]);

        //Trabalhando com Pares e Impares
        numero[i] % 2 == 0 ? quantidadePares++ : quantidadeImpares++;
        if (numero[i] % 2 == 0)
        {
            totalPares += numero[i];
        } else {
            totalImpares += numero[i];
        }
        
        //Trabalhando com Positivos e Negativos
        if (numero[i] < 0)
        {
            quantidadeNegativos++;
            totalNegativos += numero[i];
        }

        //Maior e Menor
        maior = numero[i] > maior ? numero[i] : maior;
        menor = numero[i] < menor ? numero[i] : menor;

        //Quantidade total
        total += numero[i];
        quantidadeTotal ++;
    }
    //Média
    if (quantidadePares != 0) {
        mediaPar = totalPares / quantidadePares;
    }

    mediaTotal = total / quantidadeTotal;
    system("cls || clear");

    //Mostrando para o usuário
    printf("Quantidade de números Ímpares: %i\n",quantidadeImpares);
    printf("\n");
    printf("Quantidade de números Negativos: %i\n",quantidadeNegativos);
    printf("\n");
    printf("Maior número: %i\n",maior);
    printf("Menor número: %i\n",menor);
    printf("\n");
    printf("Média de números pares: %.2f\n",mediaPar);
    printf("Média Total: %.2f\n",mediaTotal);

    return 0;
}