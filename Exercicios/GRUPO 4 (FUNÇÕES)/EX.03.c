#include <stdio.h>
#include <math.h>

    void LerValor(int *x){
        printf("\nENTRE COM UM NUMERO INTEIRO: ");
        scanf("%d",x);
    }

    int Fatorial(int n){
        if(n==0){return 1;}
        else{return n*Fatorial(n-1);}
    }

    void CalcularEX(int x){
        double ex=0;
        for(int i=0;i<=10;i++){
            ex=ex+(pow(x,i)/Fatorial(i));
            printf("ex = %f\n",ex);
        }
        printf("ex2 = %f\n",ex);
    }

    int main(){

        int x;
        LerValor(&x);

        CalcularEX(x);

    return 0;
    }
