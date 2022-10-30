#include <stdio.h>

    void MostrarEquivalenteHexadecimalOctal(int n){
        printf("\n%-10s%-10s%10s\n","DECIMAL","HEXADECIMAL","OCTAL");//MONTAR UMA ESTRUTURA DE TABELA PARA O RESULTADOS
        printf("%-10.2d%-10.08x%8o\n",n,n,n);
        printf("\n");
    }

    int main(){

        int n;
        scanf("%d",&n);//ENTRA COM O VALOR EM BASE DECIMAL

        MostrarEquivalenteHexadecimalOctal(n);

    return 0;
    }
