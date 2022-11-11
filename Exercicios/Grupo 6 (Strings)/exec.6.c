#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 140

int show(char str[MAX]){

    int soma = 0;

    for(int i = 0; str[i] != '\0'; i++) //travessia pela string
    {
        if(str[i] == ' ') soma++;
    }
    return ++soma; //acrescento de 1 por causa da primeira palavra q n e acompanhada por um espaco
}

int main(){

    char str[MAX];

    printf("-> ENTRE COM A STRING: ");
    scanf("%[^\n]%*c",str);

    printf("%d\n", show(str));

    return 0;
    }
