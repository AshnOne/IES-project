#include <stdio.h>
#define MAX 100
    
    void LerVetor(int *n,double *vet){
        *n=10;
        printf("\nENTRE COM %d NUMEROS REAIS\n\n",*n);
        for(int i=0;i<*n;i++){
            printf("-> VET[%.2d] - ",i+1);
            scanf("%lf",&vet[i]);
        }
    }

    void TrocarPosicao(double *veti,double *vetj){
        double aux;
        aux=*veti;
        *veti=*vetj;
        *vetj=aux;
    }

    void OrdenaVetor(int n,double *vet){
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(vet[i]<vet[j]){TrocarPosicao(&vet[i],&vet[j]);}
            }
        }
    }

    void Mostrar(int n,double vet[]){
        printf("\nAQUI ESTA A SEQUENCIA ORDENADA: \n\n");
        for(int i=0;i<n;i++){printf("-> N[%.2d] = %.2lf\n",i+1,vet[i]);}
        printf("\n");
    }
    
    int main(){
        int n;
        float vet[MAX];

        LerVetor(&n,vet);
        OrdenaVetor(n,vet);
        Mostrar(n,vet);

    return 0;
    }
