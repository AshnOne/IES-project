#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

    void imprimeRecursivoInverso(char *p){
        if(*p){
            imprimeRecursivoInverso(p+1); //chamada de todas as funcoes recursivamente, o primeiro print sera da ultima funcao
            printf("%c",*p);
        }
    }

    void imprimeRecursivo(char *p){
        if(*p){
            printf("%c",*p);
            imprimeRecursivo(p+1); //chamada recursiva printando antes de passar para a proxima
        }
    }

    int main(){

        char str[MAX];

        printf("-> ENTRE COM A STRING: ");
        scanf("%[^\n]%*c",str);


        imprimeRecursivo(str);
        printf("\n");
        imprimeRecursivoInverso(str);
        printf("\n");

    return 0;
    }
