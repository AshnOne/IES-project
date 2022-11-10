#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[80];
    float preco;
} produto;

void LerProdutos(produto *a)
{ // LE OS NOMES E PRECOS DOS PRODUTOS
    for (int i = 0; i < 20; i++)
    {
        printf("NOME DO PRODUTO");
        scanf("%[^\n]%*c", a[i].nome); // %*C PARA LIMPAR BUFFER
        printf("\nPRECO DO PRODUTO:\n");
        scanf("%f%*c", &a[i].preco);
    }
}

void BubbleSort(produto *p)
{ // FUNCAO QUE ORDENA OS NOME EM ORDEM ALFABETICA
    int i, j;
    produto aux; // VARIAVEL AUXILIAR DO TIPO STRUCT PARA MANIPULAR DADOS

    for (i = 0; i < 20; i++)
    {
        for (j = i + 1; j < 20; j++)
        {
            if (strcmp(p[i].nome, p[j].nome) > 0)
            { // O CARACTER MAIOR ENTRE P[I] E P[J] SERAO PASSADOS PARA P[J]
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
}
void InflacionarProduto(produto *p)
{ 

    for (int i = 0; i < 20; i++) // FOR QUE VERIFICA TODOS OS PRECOS
    {
        if (p[i].preco < 100)
        { // CASO O PRECO SEJA MENOR Q 100 ELE INFLACIONA EM 5%
            p[i].preco += p[i].preco * 0.05;
        }
    }
}
void ImprimirProdutos(produto *p)
{
    int i;

    printf("%-10s%-20s", "PRODUTO", "PRECO");

    for (i = 0; i < 20; i++)
    { // IMPRIME TODOS OS NOMES E PRODUTOS JA ORDENADOS E ATUALIZADOS
        printf("%-10s%-20.2f", p[i].nome, p[i].preco);
        printf("\n");
    }
}
int main()
{
    produto v[20];

    printf("REALIZE OS CADASTROS DOS PRODUTOS\n");
    printf("**********CADASTRO**********\n");
    LerProdutos(v);
    Ordenar(v);
    InflacionarProduto(v);
    ImprimirProdutos(v);
    return 0;
}