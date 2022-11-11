#include <stdio.h>

void SomaDiferencaProduto(float *soma, float *dif, float *prod, float a, float b)
{ // FUNCAO QUE RECEBE COMO PARAMENTRO POR REF A SOMA, DIF E PROD DE a E b
    *soma = a + b;
    *dif = a - b;
    *prod = a * b;
}
int main()
{
    float a, b, soma, dif, prod;

    printf("digite dois numeros:\n");
    scanf("%f %f", &a, &b);

    SomaDiferencaProduto(&soma, &dif, &prod, a, b); // CHAMADA DA FUNCAO Q RETORNA AS OPERACOES
    printf("soma -> %0.3f + %0.3f = %0.3f\n", a, b, soma);
    printf("diferenca -> %0.3f - %0.3f = %0.3f\n", a, b, dif);
    printf("produto -> %0.3f * %0.3f = %0.3f\n", a, b, prod);

    return 0;
}