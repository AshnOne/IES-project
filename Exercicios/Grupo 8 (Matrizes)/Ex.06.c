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

void show(int m[MAX][MAX]) //Impressao da matriz e sua diagonal secundaria
{
    int diagonal[MAX], k = 0;
    for(int i = 0; i<MAX; i++) //troca de linha
    {
        for(int j = 0; j<MAX; j++) //troca de coluna
        {
            if(i+j+1 == MAX)
            {
                diagonal[k] = m[i][j];
                k++;
            }
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal secundaria: ");

    for(int i = 0; i<MAX; i++)
    {
        printf("%d ", diagonal[i]);
    }
    printf("\n");
}

int main()
{
    int m[MAX][MAX];

    LerDados(m);

    show(m);

    return 0;
}
