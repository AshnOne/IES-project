#include <stdio.h>

    void LerValor(int *n){
        printf("-> ");
            scanf("%d",n);
    }

    void ListaOrdemCrescente(int n1,int n2){//LISTA OS VALORES ENTRE OS TERMOS
        for(int i=n1;i<=n2;i++){printf("%d%c",i,(i==n2)?'\n':' ');}
    }

    void ListaOrdemDescrescente(int n1,int n2){//LISTA OS VALORES ENTRE OS TERMOS
        for(int i=n1;i>=n2;i--){printf("%d%c",i,(i==n2)?'\n':' ');}
    }

    void CondicaoEntreTermos(int n1,int n2){//FUNÇÃO QUE DITA AS CONDIÇÕES SOBRE OS VALORES E OS RESULTADOS
        if(n1==n2){printf("Valores iguais\n");}
        else{
            if(n1<n2){ListaOrdemCrescente(n1,n2);}
            else{ListaOrdemDescrescente(n1,n2);}
        }
    }
    
    int main(){

        int n1,n2;
        LerValor(&n1);
        LerValor(&n2);
        CondicaoEntreTermos(n1,n2);

    return 0;
    }