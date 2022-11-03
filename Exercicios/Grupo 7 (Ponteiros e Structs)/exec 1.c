#include <stdio.h>

void operation(float *soma, float *dif, float *prod, float a, float b){
    *soma = a + b;
    *dif = a - b;
    *prod = a * b;
}
int main(){
    float a, b, soma, dif, prod;

    printf("digite dois numeros:\n");
    scanf("%f %f", &a, &b);

    operation(&soma, &dif, &prod, a, b);
    printf("soma -> %0.3f + %0.3f = %0.3f\n", a, b, soma);
    printf("diferenca -> %0.3f - %0.3f = %0.3f\n", a, b, dif);
    printf("produto -> %0.3f * %0.3f = %0.3f\n", a, b, prod);

    return 0;
}