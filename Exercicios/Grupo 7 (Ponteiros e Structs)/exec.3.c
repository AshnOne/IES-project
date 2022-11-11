#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

void GetMenor(int n, int *menor, int vx[])
{
    *menor = vx[0]; // RECEBE A PRIMEIRA POSICAO DO VETOR
    int i;
       for (i = 1; i < n - 2; i++)
        { // COMPARA ATE A PENULTIMA POSICAO DO VETOR
            if (*menor > vx[i])
            {
                *menor = vx[i];
            }            
        }
}

void GetMaiorMedia(int n, int vx[], int *media, int *maior)
{
    int i, j;
    int s = 0; // VAR Q RECEBERA A SOMA DE TODOS OS NUM'S

    *maior = vx[0]; // RECEBE A PRIMEIRA POSICAO DO VETOR
    for (i = 0, s = 0; i < n; i++)
    {
        s += vx[i]; 
        if (*maior < vx[i]){
            *maior = vx[i];
        }
    }
    *media = s / n; // PONTEIRO QUE RETORNA A MEDIA DO VETOR
}
void lervet(int *n, int *vx)
{
    int i;

    scanf("%d", n); // LE QUANTOS NUMEROS SERAO DIGITADOS
    for (i = 1; i <= *n; i++, vx++)
    { 
        if (i == *n)
        { // DIGITA O ULTIMO DIGITO, CASO FOR POSITIVO, TRANSFORMA EM NEGATIVO
            scanf("%d", vx);
            if (*vx > 0)
            {
                *vx = *vx * -1;
            }
        }
        else
        { 
            scanf("%d", vx);
            *vx = abs(*vx); // UTILIZA A FUNCAO ABS PRA GARANTIR TODOS POSITIVO EXCETO ULTIMO
        }
    }
}
int main()
{
    int n, v[MAX];
    int menor, maior;
    int media;

    printf("QUANTOS NUMEROS GOSTARIA DE DIGITAR?\n");
    lervet(&n, v);
    GetMaiorMedia(n, v, &media, &maior);
    GetMenor(n, &menor, v);
    printf("a media dos valores: %d\n", media);
    printf("o maior dos valores: %d\n", maior);
    printf("o menor dos valores: %d\n", menor);
    return 0;
}



