#include <stdio.h>

int razao(float *div, float a, float b){

    if (b == 0)
    {
        return 0;
    } else{
        *div = a / b;
        return 1;
    }
}

int main(){
    float a, b, div;

    printf("digite dois numero:\n");
    scanf("%f %f", &a, &b);

    razao(&div, a, b);
    if(b == 0){
        printf("nao e possivel divisao por zero");
    } else {
        printf("%0.2f/%0.2f = %0.2f\n", a, b, div);
    }

    return 0;
}