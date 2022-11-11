#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

    void ditarNumero(int num){
        if(num==0){
            printf("zero ");
        }
        if(num==1){
            printf("um ");
        }
        if(num==2){
            printf("dois ");
        }
        if(num==3){
            printf("tres ");
        }
        if(num==4){
            printf("quatro ");
        }
        if(num==5){
            printf("cinco ");
        }
        if(num==6){
            printf("seis ");
        }
        if(num==7){
            printf("sete ");
        }
        if(num==8){
            printf("oito ");
        }
        if(num==9){
            printf("nove ");
        }
    }

    void separarNumeroRecursivo(int num){
    //A FUNÇÃO "SEPARA" OS DÍGITOS RECURSIVAMENTE
    //INDO ATÉ O FINAL (PRIMEIRO DÍGITO) PARA ENTÃO COMEÇAR A CHAMAR A FUNÇÃO QUE IMPRIME O NÚMERO DITADO
        if(num){
            separarNumeroRecursivo(num/10);
            ditarNumero(num%10);
        }
    }

    void lerNumero(int *num){
        printf("-> DIGITE UM NUMERO INTEIRO: ");
        scanf("%d",num);
    }

    int main(){
        int num;

        lerNumero(&num);
        separarNumeroRecursivo(num);

    return 0;
    }
