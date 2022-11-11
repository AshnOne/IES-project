#include <string.h>
#include <stdio.h>
#define MAX 7

    void lerValores(char str[],char *letra,int *indice){
        printf("-> ENTRE COM A STRING: ");
        scanf("%[^\n]%*c",str);

        printf("-> ENTRE COM A LETRA QUE DESEJA INSERIR: ");
        scanf("%c%*c",letra);

        printf("-> ENTRE COM O INDICE DA POSICAO QUE DESEJA INSERIR: ");
        scanf("%d%*c",indice);
    }

    void inserirNovoCaracter(char str[],char ch,int indice){
        if(strlen(str)==MAX){str[MAX-1]='\0';}//LIMPAR O EXCESSO DE CARACTERES CASO HOUVER

        for(int i=strlen(str);i>indice;i--){
            str[i]=str[i-1];
        }

        str[indice]=ch;
    }

    int main(){

        char str[MAX],letra;
        int indice;

        lerValores(str,&letra,&indice);

        inserirNovoCaracter(str,letra,indice);

        printf("-> NOVA STRING: %s\n",str);

    return 0;
    }
