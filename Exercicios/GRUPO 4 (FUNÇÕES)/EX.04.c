#include <stdio.h>

double Inflacao(double valor)
{
    while(valor<100)
    {
        return valor*1.1;    
    }
    while(valor>=100)
    {
        return valor*1.2;
    }
}

int main()
{
    double valor;
    
    printf("Insira o valor:\n");
    scanf("%lf", &valor);

    printf("Novo valor: %.2lf\n", Inflacao(valor));
    return 0;
}

