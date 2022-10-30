#include <stdio.h>
#define MAX 3


void LerDados(int m[MAX][MAX]) //Leitura da matriz 3x3
{
    for(int i = 0; i<3; i++) //troca de linha
    {
        for(int j = 0; j<3; j++) //troca de coluna
        {
            printf("insira o valor de m[%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
}

void show(int m[MAX][MAX]) //Impressao da matriz e seu maior e menor elemento
{
    int maior = m[0][0], menor = m[0][0];
    for(int i = 0; i<3; i++) //troca de linha
    {
        for(int j = 0; j<3; j++) //troca de coluna
        {
            if(m[i][j]>maior)maior = m[i][j];

            if(m[i][j]<menor)menor = m[i][j];

            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("O maior elemento: %d\n", maior);
    printf("O menor elemento: %d\n", menor);
}

int main()
{
    int m[MAX][MAX];

    LerDados(m);

    show(m);

    return 0;
}
