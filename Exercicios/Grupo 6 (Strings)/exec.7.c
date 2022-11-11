#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

char str[MAX];
    void lerString(char *str){
        printf("-> ENTRE COM A STRING: ");
        scanf("%[^\n]%*c",str);
    }

    void copiaDeString(char str[],char str_cpy[]){//FUNÇÃO QUE CUMPRE A MESMA FUNÇÃO DE -strcpy-
        for(int i;i<sizeof(str);i++){
        //SEPARA A STRING POR CARACTERES PARA REALIZAR A ATRIBUIÇÃO
            str_cpy[i]=str[i];
        }
    }

    int main(){

        char str[MAX],str_cpy[MAX];

        lerString(str);

        copiaDeString(str,str_cpy);

        printf("-> STRING COPIADA DE -str- %s\n",str_cpy);

    return 0;
    }
