#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

void compara_menor(int *menor, int *val)
{
    if (*menor > *val)
    {
        *menor = *val;
    }
}
void compara_maior(int *maior, int *val)
{
    if (*maior < *val)
    {
        *maior = *val;
    }
}
void imprimevet(int n, int *vx, int *media, int *menor, int *maior)
{
    int i, j, s = 0;

    *maior = *vx;
    *menor = *vx;
    for (i = 0, s = 0; i <= n; i++)
    {
        s += vx[i];
        compara_maior(maior, (vx + i));
        for (j = 0; j < n - 1; j++)
        {
            compara_menor(menor, (vx + j));
        }
    }
    *media = s / n;
}
void lervet(int *n, int *vx)
{
    int i;

    scanf("%d", n);
    for (i = 1; i <= *n; i++, vx++)
    {
        if (i == *n)
        {
            scanf("%d", vx);
            if (*vx > 0)
            {
                *vx = *vx * -1;
            }
        }
        else
        {
            scanf("%d", vx);
            *vx = abs(*vx);
        }
    }
}
int main()
{
    int n, v[MAX];
    int menor, maior;
    int media;

    lervet(&n, v);
    imprimevet(n, v, &media, &menor, &maior);
    printf("a media dos valores: %d\n", media);
    printf("o maior dos valores: %d\n", maior);
    printf("o menor dos valores: %d\n", menor);
    return 0;
}