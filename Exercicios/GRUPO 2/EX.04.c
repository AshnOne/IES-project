#include <stdio.h>
#include <string.h>

    void LerValor(float *n){
        printf("\nENTRE COM UM NUMERO REAL:\n-> ");
            scanf("%f%*c",n);
    }
    void LerOperador(char *c){
        printf("\nENTRE COM UM OPERADOR MATEMATICO:\n-> ");
            scanf("%c%*c",c);
    }

    float OperacoesMatematicas(float n1,float n2,char c){
        if(c=='+'){return n1+n2;}
        else{
            if(c=='-'){return n1-n2;}
            else{
                if(c=='*'){return n1*n2;}
                else{return n1/n2;}
            }
        }
    }

    int main(){

        float n1,n2;
            char c;

        LerValor(&n1);
        LerOperador(&c);
        LerValor(&n2);

        printf("\n-> %.2f  %c  %.2f  =  %.2f\n\n",n1,c,n2,OperacoesMatematicas(n1,n2,c));

    return 0;
    }
