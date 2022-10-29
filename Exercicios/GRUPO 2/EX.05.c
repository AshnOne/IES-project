#include <stdio.h>
#define MAX 50
    
    float LerNotas(float *n,int num){
        *n=-1;//-n- RECEBE -1 PARA CONSEGUIR ENTRAR NA CONDIÇÃO DO WHILE
        while(*n<0 || *n>10){//-n- SÓ É PERMITIDO RECEBER VALORES ENTRE 0-10
            printf("\nDIGITE A NOTA DA PROVA %d: ",num);
            scanf("%f%*c",n);
            if(*n==50){return *n;}//SE FOR DIGITADO -50- (CONDIÇÃO DE PARADA)
                                  //ELE É AUTORIZADO A RETORNAR -50-
        }
    return *n;
    }
    
    void CalcularMediaAluno(char *nome,float *n1,float *n2,float *media,int *quant){
        int i,aux=0;
        for(i=0;i<50;i++,aux=0){
            printf("\nALUNO %d\n",i+1);
            LerNotas(&n1[i],1);
            if(n1[i]==50){break;}//SE FOR DIGITADO -50-, A FUNÇÃO FINALIZA
            else{
                LerNotas(&n2[i],2);
                media[i]=(n1[i]+n2[i])/2;
            }
        }
        *quant=i;//VARIÁVEL PARA SABER QUANTOS ALUNOS SÃO
    }

    void EstruturaDeTabela(){
        printf("\n%-10s%-10s%-10s%s\n","ALUNO","NOTA 1","NOTA 2","MEDIA");
    }
    
    void MostrarMediaDosAlunos(char nome,float n1[],float n2[],float media[],int quant){
        EstruturaDeTabela();
        for(int i=0;i<quant;i++){
            printf("%-10.2d%-10.2f%-10.2f%.2f\n",i+1,n1[i],n2[i],media[i]);
        }
        printf("\n");
    }
    
    int main(){

        char nome[MAX];
        float n1[MAX],n2[MAX],media[MAX];
        int quant;

        CalcularMediaAluno(nome,n1,n2,media,&quant);
        MostrarMediaDosAlunos(nome,n1,n2,media,quant);

    return 0;
    }