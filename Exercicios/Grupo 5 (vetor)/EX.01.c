#include <stdio.h>
#define MAX 10

    void lerVetor(float vet[]){
        printf("*ENTRE COM %d VALORES REAIS*\n\n",MAX);
        for(int i=0;i<MAX;i++){
            printf("-> VET[%.2d] = ",i+1);
            scanf("%f",&vet[i]);
        }
    }

    void getMaior_getMenor(float vet[],float *maior,float *menor){
        *maior=*menor=vet[0];//FAZ A COMPARAÇÃO COM O PRIMIERO VALOR
        for(int i=1;i<MAX;i++){//FAZ A COMPARAÇÃO COM OS VALORES SEGUINTES
            if(vet[i]>*maior){*maior=vet[i];}
            if(vet[i]<*menor){*menor=vet[i];}
        }
    }

    void mostrarMaiorMenor(float maior,float menor){
        printf("O MAIOR VALOR EH: %.2f\n",maior);
        printf("O MENOR VALOR EH: %.2f\n",menor);
    }

    int main(){

        float vet[MAX],maior,menor;

        lerVetor(vet);
        getMaior_getMenor(vet,&maior,&menor);
        mostrarMaiorMenor(maior,menor);

    return 0;
    }