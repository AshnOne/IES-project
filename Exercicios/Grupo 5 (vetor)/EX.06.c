#include <stdio.h>
#include <stdlib.h>
#define MAXL 5
#define MAXC 3

    void lerMatriz(float mat[][3]){
        printf("*ENTRE COM OS VALORES DA MATRIZ*\n\n");
        for(int i=0;i<MAXL;i++){
            for(int j=0;j<MAXC;j++){
                printf("-> MAT[%.2d][%.2d] = ",i+1,j+1);
                scanf("%f",&mat[i][j]);
            }
        }
    }

    float mediaElementosColunasPares(float mat[][3]){
        float soma=0.0;
        int colunasPares=0;
        for(int i=0;i<MAXL;i++){
            for(int j=0;j<MAXC;j++){
                if((j+1)%2==0){
                    colunasPares++;
                    soma+=mat[i][j];
                }
            }
        }
    return soma/colunasPares;
    }

    float mediaElementosLinhasImpares(float mat[][3]){
        float soma=0.0;
        int linhasImpares=0;
        for(int i=0;i<MAXL;i++){
            if((i+1)%2!=0){
                linhasImpares++;
                for(int j=0;j<MAXC;j++){
                    soma+=mat[i][j];
                }
            }
        }
    return soma/linhasImpares;
    }

    void mostrarMedias(float mat[][3]){
        printf("-> DIFENRENCA DA MEDIA DOS ELEMENTOS DAS COLUNAS PARES E DA MEDIA DOS ELEMENTOS DAS LINHAS IMPARES: %.2f",(mediaElementosColunasPares(mat)) - (mediaElementosLinhasImpares(mat)));
    }

    void mostrarMatriz(float mat[][3]){
        for(int i=0;i<MAXL;i++){
            for(int j=0;j<MAXC;j++){
                printf("%.1f ",mat[i][j]);
            }
            printf("\n");
        }
    }

    int main(){

        float mat[5][3];

        lerMatriz(mat);
        mostrarMatriz(mat);
        mostrarMedias(mat);
        printf("\n\n%.2f\n",mediaElementosColunasPares(mat));
        printf("%.2f\n",mediaElementosLinhasImpares(mat));
    return 0;
    }