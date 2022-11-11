#include <string.h>
#include <stdio.h>
#include <math.h>

    int retornaNumero(char ch){
    //RETORNA O NÚMERO (DECIMAL) EQUIVALENTE AO CARACTER ENVIADO POR -ch-
        for(int i=0;i<10;i++){
            if(ch=='0'+i){
                return 0+i;
            }
        }
    }
    
    void lerNumero(char num[]){
        printf("-> DIGITE UM NUMERO: ");
        scanf("%[^\n]%*c",num);
    }
    
    void lerBase(int *base){
        printf("-> DIGITE EM QUE BASE ESTA O NUMERO: ");
        scanf("%d%*c",base);
    }
    
    int transformarEmNumero(char num[],int digitos,int total){
    //TRANSFORMA A STRING -num- EM SEU NÚMERO DECIMAL EQUIVALENTE
        int numero;//VARÍAVEL AUXILIAR QUE RECEBE CARACTER POR CARACTER DA STRING
        for(int i=0,j=digitos-1;i<digitos;i++,j--){
            numero=retornaNumero(num[i]);
            total+=numero*pow(10,j);
        }
    return total;
    }
    
    int converter(int base,int total,int digitos,int novoTotal){
        int j=0;
        while(j<digitos){
        //MULTIPLICA CADA DIGITO PELO SEU PESO, DE ACORDO COM A BASE
            novoTotal+=total%10*pow(base,j);
            total=total/10;
            j++;
        }
    return novoTotal;
    }
    
    int numeroDeDigitos(char num[],int digitos){
        for(digitos=0;num[digitos]!='\0';digitos++);//DESCOBRIR QUANTIDADE DE DÍGITOS DA STRING
    return digitos;
    }
    
    int converterParaDecimal(char num[],int base){
        int novoTotal=0,digitos,total=0;
        
        digitos=numeroDeDigitos(num,digitos);
        
        total=transformarEmNumero(num,digitos,total);
        
        novoTotal=converter(base,total,digitos,novoTotal);
        
    return novoTotal;
    }
    

    int main(){
        char num[10];
        int base;

        lerNumero(num);
        lerBase(&base);
        
        printf("-> DECIMAL: %d",converterParaDecimal(num,base));

    return 0;
    }