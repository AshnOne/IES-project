#include <stdio.h>

int razao(float *div, float a, float b){

    if (b == 0) // RETORNA 0 CASO b FOR 0 SENAO REALIZA A DIV
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
    if(b == 0){ // VERIFICA SE FOI POSSIVEL OU NAO A RAZAO ENTRE a E b
        printf("nao foi possivel realizar essa operacao\n");
    } else {
        printf("%0.2f/%0.2f = %0.2f\n", a, b, div);
    }

    return 0;
}