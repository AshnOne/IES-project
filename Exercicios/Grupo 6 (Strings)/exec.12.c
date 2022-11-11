#include <string.h>
#include <stdio.h>
#define MAX 100

    void lerString(char str[]){
        printf("-> DIGITE A STRING: ");
        scanf("%[^\n]%*c",str);
    }

    char* encontrarEndereco(char *str){
    //FUNÇÃO QUE RETORNA UM PONTEIRO PARA CHAR, CONTENDO O ENDEREÇO DA PRIMEIRA POSIÇÃO EM BRANCO
        int i;
        char *p;

        do{
            str++;
        }while(*str!=' ');

        p=str;

    return p;
    }

    int main(){
        char str[MAX];
        char *p;

        lerString(str);

        p=encontrarEndereco(str);

        printf("-> ENDERECO DA 1a POSICAO EM BRANCO E %p\n",p);

    return 0;
    }
