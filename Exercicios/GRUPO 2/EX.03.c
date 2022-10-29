#include <stdio.h>

    float AcrescimoSobreProduto(float valor){
        /*FUNÇÃO QUE IRÁ ACRESCER -10%- EM PRODUTOS COM VALORES MENORES QUE -100.00-
        E ASCRESCER -20%- EM PRODUTOS COM VALORES MAIORES OU IGUAIS A -100.00-
        SEM USAR OPERADOR -if- OU -ternário-*/
        float inf,inf_aux,aux;
        inf=(valor*10)/100;//VARIÁVEL QUE RECEBE UM ACRÉSCIMO DE 10%
        aux=valor-99;
        /*VARIÁVEL -aux- IRÁ SEMPRE RECEBER VALORES MAIORES OU IGUAIS A -1-
        POIS COMO A CONDIÇÃO DE INFLAÇÃO MUDAVA COM VALORES A PARTIR DE -100.00-
        E COMO A VARIÁVEL INDEXADORA -i- É DO TIPO -int-
        EU PRECISAVA QUE A CONDIÇÃO DO -for- OCORRESSE PELO MENOS UMA VEZ CASO 
        -valor- FOSSE MAIOR QUE -99.99-
        CASO -valor- SEJA MENOR QUE -100.00-, -aux- SERÁ MENOR DO QUE 1*/

        inf_aux=inf;
        for(int i=aux;i>0;inf_aux=inf*2,i--){
            /*-inf-aux- RECEBERÁ O VALOR DE -inf- MULTIPLICADO POR -2-
            POIS COMO A PORCENTAGEM DE INFLAÇÃO DOBRA
            O VALOR DE INFLAÇÃO TAMBÉM DOBRA*/ 
            inf_aux=inf;
            /*COMO -aux- PODERIA RECEBER VALORES MAIORES DO QUE -1-
            -inf_aux- RECEBERIA O VALOR DE -inf- NOVAMENTE PARA EVITAR QUE O VALOR DE-inf_aux-
            FOSSE DOBRADO MAIS DE UMA VEZ
            SE -(float) aux- FOR MENOR QUE -1-, -for- NÃO SERÁ EXECUTADO*/
        }
    return valor+inf_aux;
    }
    
    int main(){

        float valor;
        scanf("%f",&valor);

        printf("\nR$ %.2f\n\n",AcrescimoSobreProduto(valor));

    return 0;
    }