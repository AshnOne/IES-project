#include <stdio.h>
   
    void FahrenheitParaCelcius(int *f,int *c){
        printf("ENTRE COM A TEMPERATURA EM FAHRENHEIT: ");
        scanf("%d",f);
        *c=(*f-32)*(5/9);//FÓRMULA DE CONVERSÃO DE FAHRENHEIT PARA CELCIUS
    }

    void MostrarValoresDeTemperatura(int f,int c){
        printf("\n%-10s%10s\n","FAHREINHAIT","CELCIUS");//MOSTRAR ESTRUTURA DE TABELA PARA OS VALORES
        printf("%-14.2d%.2d\n\n",f,c);
    }
    
    int main(){

        int f,c;

        FahrenheitParaCelcius(&f,&c);
        MostrarValoresDeTemperatura(f,c);

    return 0;
    }