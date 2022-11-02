#include <stdio.h>
#define MAX 3


void LerDados(int m[MAX][MAX]) //Leitura da matriz 3x3
{
    for(int i = 0; i<MAX; i++) //troca de linha
    {
        for(int j = 0; j<MAX; j++) //troca de coluna
        {
            printf("insira o valor de m[%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
}
void soma(int m[MAX][MAX])
{
    int soma = 0;
    for(int i = 0; i < MAX; i++) //troca de linha
    {

        for(int j = 0; j < MAX; j++) //troca de coluna
        {
            if(m[i][j]%2 == 1)soma += m[i][j];
        }
    }
    printf("Soma dos numeros impares: %d\n", soma);
}
void show(int m[MAX][MAX]) //Impressao da matriz
{
    for(int i = 0; i<MAX; i++) //troca de linha
    {
        for(int j = 0; j<MAX; j++) //troca de coluna
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    soma(m);
}



int main()
{
    int m[MAX][MAX];

    LerDados(m);

    show(m);

    return 0;
}
