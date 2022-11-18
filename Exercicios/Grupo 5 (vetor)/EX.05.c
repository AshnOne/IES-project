#include <stdio.h>
#define MAX 10

    void lerVetor(int vet[]){
        printf("*ENTRE COM %d NUMEROS INTEIROS*\n\n",MAX);
        for(int i=0;i<MAX;i++){
            printf("-> VET[%.2d] = ",i+1);
            scanf("%d",&vet[i]);
        }
    }

    float calcularMediaVetor(int vet[]){
        int soma=0;
        for(int i=0;i<MAX;i++){
            soma+=vet[i];
        }
    return soma/MAX;
    }

    void verificaIgualdade(int vet[],int media){
        for(int i=0;i<MAX;i++){
            if(vet[i]==media){
                printf("-> %d EH IGUAL A MEDIA (%d)\n",vet[i],media);
            }
        }
    }

    int main(){

        float vet[MAX];

        lerVetor(vet);
        verificaIgualdade(vet,calcularMediaVetor(vet));

    return 0;
    }