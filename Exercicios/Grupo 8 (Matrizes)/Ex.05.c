#include <stdio.h>
#define MAX 4


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

void show(int m[MAX][MAX]) //Impressao da matriz e sua diagonal principal
{
    int diagonal[MAX], k = 0;
    for(int i = 0; i<MAX; i++) //troca de linha
    {
        for(int j = 0; j<MAX; j++) //troca de coluna
        {
            if(i==j)
            {
                diagonal[k] = m[i][j];
                k++;
            }
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal principal: ");

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
