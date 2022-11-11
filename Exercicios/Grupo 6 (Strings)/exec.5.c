#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

int show(char str[MAX]){
    char sim[] = "SIM";
    char nao[] = "NAO";

    if(strcmp(str, sim) == 0) return 1;
    if(strcmp(str, nao) == 0) return 0;

    return -1;
}

int main(){

    char str[MAX];

    printf("-> ENTRE COM A STRING: ");
    scanf("%[^\n]%*c",str);

    if(show(str) != -1) printf("%d\n", show(str));

    return 0;
    }
