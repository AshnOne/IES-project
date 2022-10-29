#include <stdio.h>

    void TabuadaDe_N(int n){//RETORNAR TABUADA DO NÚMERO SOLICITADO
        int i;
        printf("\nTABUADA DO %d:\n\n",n);
        for(i=0;i<=10;i++){
            printf("%.2d  x  %.2d  =  %.2d\n",i,n,i*n);
        }
        printf("\n");
    }

    int EntreComNumero(int *n){
        printf("ENTRE COM UM VALOR DE 1 - 9 SOBRE O QUAL DESEJA VER A TABUADA, OU DIGITE 0 PARA SAIR: ");
        scanf("%d",n);
    return *n;
    }
    
    int main(){

        int n;

        EntreComNumero(&n);
        while(n!=0){//IRÁ SOLICITAR A FUNÇÃO ENQUANTO O USUÁRIO NÃO DIGITAR -0- (SAIR)
            TabuadaDe_N(n);
            EntreComNumero(&n);
        }

    return 0;
    }