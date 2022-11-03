#include <stdio.h>

int menor_e_maior(int vx[]) // retorna o maior e menor valor do vetor
{ 
    int i = 0;
    int menor, maior;

    menor = vx[i];
    maior = vx[i];
    for (i = 0; i < 10; i++)
    {
        if (menor > vx[i])
        {
            menor = vx[i];
        }
        if (maior < vx[i])
        {
            maior = vx[i];
        }
    }
    return printf("\ndos 10 valores lido, o maior eh %d e o menor eh %d\n", maior, menor);
}
int lervet(int vx[]) // scaneia valores do vetor e retorna uma funcao
{ 
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vx[i]);
    }

    return menor_e_maior(vx);
}
int main()
{
    int vx[10];

    printf("\ndigite 10 valores:\n");
    lervet(vx);

    return 0;
}