#include <stdio.h>
#include <math.h>
    
    void LerValor(int *n){
        printf("\nENTRE COM UM NUMERO INTEIRO: ");
        scanf("%d",n);
    }

    int CalcularFatorialDeN(int n){
        if(n==0){return 1;}
        else{return n*CalcularFatorialDeN(n-1);}
    }

    int main(){

        int n;
        LerValor(&n);

        printf("\n-> fat(%d) = %d\n\n",n,CalcularFatorialDeN(n));

    return 0;
    }