#include <stdio.h>

double vista(double valor)
{
    return valor * 0.9;
}

void parcelado2x(double valor)
{
    printf("1a parcela: %lf\n2a parcela: %lf\nTotal: %lf\n", valor/2, valor/2, valor);
}

double parcelado(double valor)
{
    if(valor <= 100) return 0;

    int prestacoes;
    double NovoValor = 0, ValorDaPrestacao;
    printf("quantas prestacoes?\n");
    scanf("%d", &prestacoes);

    NovoValor += valor / prestacoes;
    ValorDaPrestacao = NovoValor;

    for(int i = 1; i<prestacoes; i++)
    {
        printf("%lf\n", ValorDaPrestacao);
        ValorDaPrestacao *= 1.03;
        NovoValor += ValorDaPrestacao;
    }
    printf("%lf\n", ValorDaPrestacao);

    return NovoValor;
}

int main()
{
    double valor;
    int tipo;
    
    printf("Insira o valor:\n");
    scanf("%lf", &valor);

    
    
    if(valor > 100)
    {
        printf("escolha uma forma de pagamente:\n1-A vista\n2-Parcelado 2x\n3-Parcelado 3x-10x\n");
        scanf("%d", &tipo);
        
        if(tipo == 1) printf("Total: %lf\n", vista(valor));
        else if(tipo == 2) parcelado2x(valor);
        else printf("Total: %lf\n", parcelado(valor));
    }
    else
    {
        printf("escolha uma forma de pagamente:\n1-A vista\n2-Parcelado 2x\n");
        scanf("%d", &tipo);
        if(tipo == 1) printf("Total: %lf\n", vista(valor));
        else parcelado2x(valor);
    }

    return 0;
}