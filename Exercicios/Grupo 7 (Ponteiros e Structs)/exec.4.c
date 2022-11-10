#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 30

typedef struct
{
    char aluno[MAX];
    float notas[3];
}Notas;

void lernotas(Notas *a){
    
    for (int i = 0; i < 3; i++)
    { // FOR QUE LÊ 3 NOTAS DO ALUNO
        scanf("%f%*c", &a->notas[i]);
    }
}
int main(){
    Notas v;

    printf("DIGITE O NOME DO ALUNO:\n");
    scanf("%[^\n]%*c", v.aluno); // LÊ O NOME DO ALUNO
    lernotas(&v); // CHAMADA DA FUNCAO PARA LÊR NOTAS
    printf("%-10s%-10s%-10s%-10s\n", "NOME", "NOTA 1", "NOTA 2", "NOTA 3");
    printf("%-10s", v.aluno);
    for (int i = 0; i < 3; i++)
    { // PRINTA AS 3 NOTAS LIDAS
        printf("%-10.1f", v.notas[i]);
    }
    return 0;
}