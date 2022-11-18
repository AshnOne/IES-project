#include <stdio.h>

    void lerVetor(double vet[],int n){
        printf("*ENTRE COM %d NUMEROS INTEIROS*\n\n",n);
        for(int i=0;i<n;i++){
            printf("-> VET[%.2d] = ",i+1);
            scanf("%d",&vet[i]);
        }
    }

    int lerQuantiadeDeValores(int *n){
        printf("-> QUANTOS VALORES DEVEM SER INSERIDOS NO VETOR? ");
        scanf("%d",n);
    }

    void mostrarVetor(double vet[],int n){
        for(int i=0;i<n;i++){
            printf("-> VET[%.2d] = %.2d\n",i+1,vet[i]);
        }
    }

    int main(){

        int n;
        lerQuantiadeDeValores(&n);

        double vet[n];
        lerVetor(vet,n);

        mostrarVetor(vet,n);
        
    return 0;
    }