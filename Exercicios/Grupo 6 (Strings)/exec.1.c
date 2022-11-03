#include <stdio.h>
#define MAX 80

int ismin(char c1){
    int min;

    min = ((c1 >= 'a') && (c1 <='z')) || ((c1 >='A') && (c1 <= 'Z'));

    return min;
}
int isnumber(char c1){
    int numb;
    numb = (c1 >= '1') && (c1 <= '9');
    
    return numb;
}
int ispont(char c1){
    int pont;

    pont = (c1 =='.') || (c1 == ',') || (c1 == '?') || (c1 == '!') || (c1 == ';');

    return pont;
}
int isvogal(char c1){
    int vogal;

      vogal = (c1 =='A') || (c1 == 'E') || (c1 == 'I') || (c1 == 'O') || (c1 == 'U') || (c1 == 'a') ||
    (c1 == 'e') || (c1 == 'i') || (c1 == 'o') || (c1 == 'u');
    
    return vogal;
}
void teste(char vx[]){
    int i, s, p, num, min;

    for (s = p = num = min = i = 0; vx[i] != '\0'; i++)
    {
        s += isvogal(vx[i]);
        p += ispont(vx[i]);
        num += isnumber(vx[i]);
        min += ismin(vx[i]);
    }

    printf("a quantidade de vogais eh: %d\n", s);
    printf("a quantidade de pontuacoes eh: %d\n", p);
    printf("a quantidade de numeros eh: %d\n", num);
    printf("a quantidade de letras minusculas eh: %d\n", min);
}
int main(){

    char str[MAX];
    
    scanf("%[^\n]", str);
    teste(str);

    return 0;
}
