#include <stdio.h>
#define MAX 10
    
    void LerVetor(float *vet){
        printf("\nENTRE COM %d NUMEROS REAIS\n\n",MAX);
        for(int i=0;i<MAX;i++){
            printf("-> VET[%.2d] - ",i+1);
            scanf("%f",&vet[i]);
        }
    }

    void TrocarPosicao(float *veti,float *vetj){
        double aux;
        aux=*veti;
        *veti=*vetj;
        *vetj=aux;
    }

    void OrdenaVetor(float *vet){
        int i,j;
        for(i=0;i<MAX;i++){
            for(j=0;j<MAX;j++){
                if(vet[i]<vet[j]){TrocarPosicao(&vet[i],&vet[j]);}
            }
        }
    }

    void Mostrar(float vet[]){
        printf("\nAQUI ESTA A SEQUENCIA ORDENADA: \n\n");
        for(int i=0;i<MAX;i++){
            printf("-> N[%.2d] = %.2f\n",i+1,vet[i]);
        }
    }
    
    int main(){
        float vet[MAX];

        LerVetor(vet);
        OrdenaVetor(vet);
        Mostrar(vet);

    return 0;
    }
