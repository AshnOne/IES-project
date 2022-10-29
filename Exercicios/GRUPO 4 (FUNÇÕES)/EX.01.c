#include <stdio.h>
#include <math.h>

    void LerValores(float *x, int *n){
        printf("\nENTRE COM UM NUMERO REAL (BASE): ");
        scanf("%f",x);
        printf("\nENTRE COM UM NUMERO INTEIRO (EXPOENTE): ");
        scanf("%d",n);
    }
    
    void CalcularEnesimaPotencia(float x,int n){
        printf("\n-> %.2f^%d = %.2f\n\n",x,n,pow(x,n));
    }
    
    int main(){

        float x;
        int n;

        LerValores(&x,&n);
        CalcularEnesimaPotencia(x,n);

    return 0;
    }