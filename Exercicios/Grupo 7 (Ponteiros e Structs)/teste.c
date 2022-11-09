#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

    typedef struct{
        char nome[30];
        char endereco[100];
        char fone[10];
        long int cep;
    }Agenda;

    void tabelaDeOpcoes(int *op){

        printf(" ________________________________________________________________________________________________ \n");
        printf("|                                                                                                |\n");
        printf("|                                        ESCOLHA UMA OPCAO                                       |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("|                                                ||                                              |\n");
        printf("| 1 - CADASTRAR NOVO NOME                        || 2 - IMPRIMIR DADOS DE PESSOA                 |\n");
        printf("|________________________________________________||______________________________________________|\n");
        printf("|                                                ||                                              |\n");
        printf("| 3 - IMPRIMIR NOMES CADASTRADOS POR LETRA       || 4 - SAIR                                     |\n");
        printf("|________________________________________________||______________________________________________|\n");
        
        printf("\n-> ESCOLHA UMA OPCAO: ");
        scanf("%d%*c",op);
    }

    void cadastrarNovoNome(Agenda a[],int quant_ag){
        printf("\nDIGITE O NOME: ");
        scanf("%[^\n]%*c",a[quant_ag].nome);
        printf("\nDIGITE O ENDERECO: ");
        scanf("%[^\n]%*c",a[quant_ag].endereco);
        printf("\nDIGITE O TELEFONE: ");
        scanf("%[^\n]%*c",a[quant_ag].fone);
        printf("\nDIGITE O CEP: ");
        scanf("%ld%*c",&a[quant_ag].cep);
    }

    void imprimir(Agenda a){
        printf("\nNOME: %s\n",a.nome);
        printf("\nENDERECO: %s\n",a.endereco);
        printf("\nTELEFONE: %s\n",a.fone);
        printf("\nCEP: %ld\n",a.cep);
    }

    void imprimirDadosPessoa(Agenda a[],int quant_ag){
        char strAux[30];
        int i;

        printf("\nSOBRE QUEM DESEJA VER OS DADOS? ");
        scanf("%[^\n]%*c",strAux);

        for(i=0;i<quant_ag;i++){
            if(strcmp(a[i].nome,strAux)==0){
                imprimir(a[i]);
            }
            else{
                if(i==quant_ag-1){printf("\nPESSOA NAO ENCONTRADA NOS REGISTROS\n");}
            }
        }

    }

    void imprimirDadosCadastradosPorLetra(Agenda a[],int quant_ag){
        char c;

        printf("BUSCA DE DADOS POR LETRA\nINSIRA UMA LETRA: ");
        scanf("%c%*c",&c);
        
        for(int i=0;i<quant_ag;i++){
            if(c==a[i].nome[0]){
                printf("LETRA %c\n",c);
                imprimir(a[i]);
            }
            printf("\n");
        }
    }

    int main(){

        int op=0;
        int quant_ag;//VARIÁVEL PARA INCREMETAR O VETOR DO OBJETO AGENTE
        Agenda a[MAX];

        do{
            tabelaDeOpcoes(&op);
            if(op==1){
                cadastrarNovoNome(a,quant_ag);
                quant_ag++;//SE INCREMENTA QUANDO A FUNÇÃO É CHAMADA
            }
            if(op==2){
                imprimirDadosPessoa(a,quant_ag);
            }
            if(op==3){
                imprimirDadosCadastradosPorLetra(a,quant_ag);
            }
        }while(op!=4);

    return 0;
    }