#include <stdio.h>
#define MAX 3
#define MAX1 4


void LerDados(int m[MAX][MAX1]) //Leitura da matriz 3x4
{
    for(int i = 0; i<MAX; i++) //troca de linha
    {
        for(int j = 0; j<MAX1; j++) //troca de coluna
        {
            printf("insira o valor de m[%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
}
void soma(int m[MAX][MAX1])
{
    int soma;
    for(int i = 0; i < MAX; i++) //troca de linha
    {
        soma = 0;
        for(int j = 0; j < MAX1; j++) //troca de coluna
        {
            soma += m[i][j];

        }
    printf("Soma da linha %d: %d\n", i+1, soma);
    }

}
void show(int m[MAX][MAX1]) //Impressao da matriz
{
    for(int i = 0; i<MAX; i++) //troca de linha
    {
        for(int j = 0; j<MAX1; j++) //troca de coluna
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    soma(m);
}



int main()
{
    int m[MAX][MAX1];

    LerDados(m);

    show(m);

    return 0;
}
