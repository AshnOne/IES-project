#include <stdio.h>

    void TabuadaDe1a9(){
        int i,j;
        for(i=1;i<=9;i++){
            printf("\nTABUADA DO %d\n\n",i);
            for(j=0;j<=10;j++){//MOSTRA A TABUADA DO NUMERO -i- DE 0 A 10
                printf("%.2d  x  %.2d  =  %.2d\n",i,j,i*j);
            }
            printf("\n");
        }
        printf("\n");
    }

    int main(){

        TabuadaDe1a9();

    return 0;
    }