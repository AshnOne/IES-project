#include <stdio.h>
#define MAX 4


void LerDados(int m[MAX][MAX]) //Leitura da matriz 4x4
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
    int soma;
    for(int i = 0; i < MAX; i++) //troca de coluna
    {
        soma = 0;
        for(int j = 0; j < MAX; j++) //troca de linha
        {
            soma += m[j][i];
        }
        printf("Soma da coluna %d: %d\n", i+1, soma);
    }
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
