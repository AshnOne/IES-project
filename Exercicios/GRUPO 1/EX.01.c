#include <stdio.h>

    void mostrar_equivalente(float mt){//FUNÇÃO PARA MOSTRAR O EQUIVALENTE EM DECÍMETRO, CENTÍMETRO E METRO
        printf("\n%-10s%-10s\n","VALOR","UN.");//MONTAR UMA ESTRUTURA EM FORMATO DE TABELA
        printf("%-10.2f%-10s\n",mt*10,"dm");
        printf("%-10.2f%-10s\n",mt*100,"cm");
        printf("%-10.2f%-10s\n\n",mt*1000,"mm");
    }
    
    int main(){

        float mt;
        
        scanf("%f",&mt);//LER UM VALOR EM METRO

        mostrar_equivalente(mt);

    return 0;
    }