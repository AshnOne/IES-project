#include <stdio.h>
#include <math.h>

    float RaizQuadradaSomaDosQuadrados(float n1,float n2){
        float x=(n1*n1)+(n2*n2);//VARIÁVEL AUXILIAR PARA CALCULAR A SOMA DOS QUADRADOS DOS 2 TERMOS
    return sqrt(x);//FUNÇÃO QUE CALCULA RAIZ QUADRADA
    }

    float ModuloPrimeiroTermo(float n1){
    return abs(n1);//FUNÇÃO QUE RETORNO VALOR ABSOLUTO(MÓDULO) DE UM TERMO
    }

    float SenoDiferencaDosTermos(float n1,float n2){
    return sin(n1-n2);//FUNÇÃO QUE RETORNO O SENO
    }

    float SomaDosTermos(float n1,float n2){
    return n1+n2;
    }

    float ProdutoPrimeiro_QuadradoSegundo(float n1,float n2){
    return n1*(n2*n2);
    }

    float QuadradoPrimeiroTermo(float n1){
    return n1*n1;
    }

    void LeituraDeDoisNumeros(float *n1,float *n2){
        printf("ENTRE COM 2 NUMEROS REAIS:\n");
        printf("-> ");
        scanf("%f",n1);
        printf("-> ");
        scanf("%2f",n2);
    }

    void mostrarResultados(float n1,float n2){
        printf("\n\n-> %.2f + %.2f = %.2f\n\n",n1,n2,SomaDosTermos(n1,n2));
        printf("-> %.2f * %.2f^2 = %.2f\n\n",n1,n2,ProdutoPrimeiro_QuadradoSegundo(n1,n2));
        printf("-> %.2f^2 = %.2f\n\n",n1,QuadradoPrimeiroTermo(n1));
        printf("-> RAIZ QUADRADA DE %.2lf^2 + %.2lf^2 = %.2lf\n\n",n1,n2,RaizQuadradaSomaDosQuadrados(n1,n2));
        printf("-> SIN(%.2f - %.2f) = %.2f\n\n",n1,n2,SenoDiferencaDosTermos(n1,n2));
        printf("-> MODULO DE %.2f = %.2f\n\n",n1,ModuloPrimeiroTermo(n1));
    }
    
    int main(){

        float n1,n2;

        LeituraDeDoisNumeros(&n1,&n2);

        mostrarResultados(n1,n2);
        
    return 0;
    }