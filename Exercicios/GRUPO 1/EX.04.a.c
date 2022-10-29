#include <stdio.h>
   
    void ConverterFahrenheitParaCelcius(double *f,double *c){
        printf("ENTRE COM A TEMPERATURA EM FAHRENHEIT: ");
        scanf("%lf",f);
        *c=(*f-32.0)*(5.0/9.0);//FÓRMULA DE CONVERSÃO DE FAHRENHEIT PARA CELCIUS
    }

    void MostrarValoresDeTemperatura(double f,double c){
        printf("\n%-10s%10s\n","FAHREINHAIT","CELCIUS");//MOSTRAR ESTRUTURA DE TABELA PARA OS VALORES
        printf("%-14.2lf%.2lf\n\n",f,c);
    }
    
    int main(){

        double f,c;

        ConverterFahrenheitParaCelcius(&f,&c);
        MostrarValoresDeTemperatura(f,c);

    return 0;
    }