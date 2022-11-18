#include <stdio.h>
#define MAX 5

    void lerNotaAluno(float vet[]){
        printf("*ENTRE COM AS %d NOTAS DE UM ALUNO*\n\n",MAX);
        for(int i=0;i<MAX;i++){
            printf("-> NOTA %d = ",i+1);
            scanf("%f",&vet[i]);
        }
    }

    float calcularMediaAluno(float vet[]){
        float soma=0.0;
        for(int i=0;i<MAX;i++){
            soma+=vet[i];
        }
    return soma/MAX;
    }

    void mostrarMediaAluno(float vet[]){
        printf("-> A MEDIA DO ALUNO EH: %.2f",calcularMediaAluno(vet));
    }

    int main(){

        float vet[MAX];

        lerNotaAluno(vet);
        mostrarMediaAluno(vet);

    return 0;
    }