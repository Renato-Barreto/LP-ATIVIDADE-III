//Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor 
//e apresentando o total de vendas ao final. Considere que cada venda precisa do produto de um produto, 
//seu preço e sua quantidade. Crie um menu onde o usuário possa digitar o número 1 para adicionar uma venda e 
//o número 2 para sair do menu e exibir o total das vendas realizadas.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Variáveis
    int linha = 999;
    char produto[linha][250];
    int quantidade[linha];
    float preco[linha];
    float vendaTotal; 
    int botao;
    int i, j;

    // Solicitando Dados
    do
    {
        printf("Deseja realizar registro de venda?\n");
        printf("1 - Registrar\n");
        printf("2 - Vizualizar e Finalizar\n");
        printf("Resposta: ");
        scanf("%i", &botao);
        system("cls || clear");
        fflush(stdin);

        switch (botao)
        {
        case 1:
            printf("Produto comprado: ");
            gets(produto[j]);

            printf("Quantidade comprada: ");
            scanf("%i",&quantidade[j]);

            printf("Preço Total desta venda: ");
            scanf("%f",&preco[j]);

            vendaTotal += preco[j];

            system("cls || clear");
            j++;
            
            break;
        case 2:
            for (i = 0; i < j; i++)
            {
                printf("Produto: %s \n", produto[i]);
                printf("Quantidade: %i \n", quantidade[i]);
                printf("Valor Total: %.1f \n", preco[i]);
                printf("-------------------\n");
            }
                printf("Total de Vendas: %i \n", j);
                printf("Lucro das Vendas: %.1f \n", vendaTotal);
            break;
        default:
            break;
        }

    } while (botao == 1);

    return 0;
}