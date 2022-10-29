#include <stdio.h>
#define MAX 127
    
    void TabelaASCII(){
        printf("%-10s%-10s%10s\n","DECIMAL","HEXADECIMAL","CARACTER");//MOSTAR ESTRTURA EM TABELA
        for(int i=0;i<=MAX;i++){
            printf("%-10.3d%-13.02x%c\n",i,i,i);
        }
    }
    
    int main(){

        TabelaASCII();

    return 0;
    }