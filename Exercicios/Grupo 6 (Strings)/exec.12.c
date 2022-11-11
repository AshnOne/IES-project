#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void LerString(char str[], int *p){
    int i, x;
    scanf("%[^\n]%*c", str);
    x = strlen(str); // X RECEBE O TAMANHO DA STRING

    for (i = 0; i < x ; i++)
    {
        if (str [i == '\0']) 
        { // VERIFICA ATE ENCONTRAR O CARACTER EM BRANCO
            *p = &str[i]; // PONTEIRO RECEBE O ENDERECO DE MEMORIA DO '\0'
            exit;
        }
        
    }
    
}
int main(){
    char str[100];
    int p;
    
    LerString(str, &p);
    printf("O endereco de memoria do caracter em branco eh: %d\n", p);

    return 0;
}