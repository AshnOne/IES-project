#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

    typedef struct{
        char nome_sbnome[MAX];//NOME COMPLETO
        char listaNomes[MAX];//LISTA DE NOMES
        char listaSbnome[MAX];//LISTA DE SOBRENOMES
    }Pessoa;

    int lerNomePessoa(Pessoa *p,int n){
        do{
            scanf("%[^\n]%*c",p[n].nome_sbnome);
            n++;
        }while(n!=20 && strcmp(p[n-1].nome_sbnome,"FIM")!=0);
    return n-1;
    }

    void separarNomeESbnome(Pessoa *p,int n){
        int i,j,k,l,aux;
        for(i=0,k=0,l=0,aux=0;i<n;i++,k=0,l=0,aux=0){
            for(j=0;j<strlen(p[i].nome_sbnome);j++){
                if(p[i].nome_sbnome[j]==' '){//QUANDO O CARACTER É ESPAÇO, MUDA DE LISTA DE NOMES PARA SOBRENOMES
                    aux=1;
                    p[i].listaNomes[k]='\0';//LIMPRA O BUFFER
                }
                else{
                    if(aux==0){
                        p[i].listaNomes[k]=p[i].nome_sbnome[j];
                        k++;
                    }else{
                        if(aux==1){
                            p[i].listaSbnome[l]=p[i].nome_sbnome[j];
                            l++;
                        }
                    }
                }
                if(j==strlen(p[i].nome_sbnome)-1){p[i].listaSbnome[l]='\0';}//LIMPA O BUFFER
            }
        }
    }

    void ordenar(Pessoa p[],int n){
    //ORDENA EM ORDEM ALFABÉTICA
        int i,j;
        char aux[MAX];//STRING AUXILIAR PARA SER REALIZADA A TROCA

        for(i=n-1;i>0;i--){
            for(j=0;j<i;j++){
                if(strcmp(p[j].listaNomes,p[j+1].listaNomes)>0){
                    strcpy(aux,p[j].listaNomes);
                    strcpy(p[j].listaNomes,p[j+1].listaNomes);
                    strcpy(p[j+1].listaNomes,aux);
                }
            }
        }

        for(i=n-1;i>0;i--){
            for(j=0;j<i;j++){
                if(strcmp(p[j].listaSbnome,p[j+1].listaSbnome)>0){
                    strcpy(aux,p[j].listaSbnome);
                    strcpy(p[j].listaSbnome,p[j+1].listaSbnome);
                    strcpy(p[j+1].listaSbnome,aux);
                }
            }
        }
    }

    void imprimirLista(Pessoa p[],int n){
        printf("\n*LISTA DE NOMES*\n");
        for(int i=0;i<n;i++){
            printf("-> %d %s\n",i+1,p[i].listaNomes);
        }
        printf("\n*LISTA DE SOBRENOMES*\n");
        for(int i=0;i<n;i++){
            printf("-> %d %s\n",i+1,p[i].listaSbnome);
        }
    }

    void mediaLetras(Pessoa p[],int n){
        int i;
        int soma=0;
        for(i=0;i<n;i++){
            soma+=strlen(p[i].listaNomes);
        }

        printf("\n-> A MÉDIA DE LETRAS DE PRE-NOMES É: %d\n",soma/n);

        soma=0;
        for(i=0;i<n;i++){
            soma+=strlen(p[i].listaSbnome);
        }

        printf("\n-> A MÉDIA DE LETRAS DE SOBRENOMES É: %d\n",soma/n);
    }

    int main(){

        Pessoa p[20];
        int n=0;

        n=lerNomePessoa(p,n);

        separarNomeESbnome(p,n);

        ordenar(p,n);

        imprimirLista(p,n);

        mediaLetras(p,n);

    return 0;
}
