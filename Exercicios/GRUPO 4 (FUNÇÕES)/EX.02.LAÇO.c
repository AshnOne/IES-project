#include <stdio.h>
#include <math.h>
    
    void LerValor(int *n){
        printf("\nENTRE COM UM NUMERO INTEIRO: ");
        scanf("%d",n);
    }

    int CalcularFatorialDeN(int n){
        int x,i;
        for(i=0,x=1;i<n;i++){
            x=x*(n-i);
        }
    return x;
    }
    
    int main(){

        int n;
        LerValor(&n);

        printf("\n-> fat(%d) = %d\n\n",n,CalcularFatorialDeN(n));

    return 0;
    }