#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void LerString(char str[]){
    scanf("%[^\n]%*c", str);
}

void RemoveChar(char str[], char *a){
    int i, j;
    char aux[100], str1[100];

    for (i = j = 0; i < strlen(str); i++)
    {
        if (str[i] != *a) // VERIFICA TODOS CARACTERES QUE SAO DIFERENTES DO CHAR INDICADO
        {
            aux[j++] = str[i]; // COPIA A STRING COM CARACTER DELETADO E COPIA PRA STRING AUX
        }
    }
    strcpy(str1, aux); // REALIZA A TROCA DA STRING AUX COM OUTRA STRING
    printf("%s", str1);
}
int main(){
    char str[100];
    char a;
    
    LerString(str);
    scanf("%c", &a);
    RemoveChar(str, &a);

    return 0;
}

