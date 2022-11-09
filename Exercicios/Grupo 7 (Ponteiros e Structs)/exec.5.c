#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX100 100
#define MAX30 30
#define MAX10 10
#define MAX1 1

typedef struct
{
    char nome[30];
    char endereco[100];
    char fone[10];
    long int cep;
} AGENDA;

void imprimir(AGENDA p) // FUNCAO QUE IMPRIME NA TELA OS CADASTROS
{
    printf("******USUARIO CADASTRADO******\n");
    printf("NOME: %s\n", p.nome);
    printf("ENDERECO: %s\n", p.endereco);
    printf("FONE: %s\n", p.fone);
    printf("CEP: %ld\n", p.cep);
}
void print_options(int *op) // PRINTA OPCOES E SELECIONA OP ESCOLHIDA
{
    printf("Digite o numero da escolha desejada:\n");
    printf("1. Entrar um novo nome na agenda.\n");
    printf("2. Imprimir na tela os dados de uma das pessoas cadastradas.\n");
    printf("3. Imprimir a lista de nomes cadastrados que comecem pela letra indicada.\n");
    printf("5. Sair\n");
    scanf("%d%*c", op);
}
void lerdados(AGENDA *p, int quant) // LÊ DADOS DO CADASTRO
{
    printf("Digite o nome:\n");
    scanf("%[^\n]%*c", p[quant].nome);
    printf("\nDigite o endereco:\n");
    scanf("%[^\n]%*c", p[quant].endereco);
    printf("\nDigite o telefone:\n");
    scanf("%[^\n]%*c", p[quant].fone);
    printf("\nDigite o CEP:\n");
    scanf("%d%*c", &p[quant].cep);
    system("cls");
}
void printar_cadastro(AGENDA *p, int x) // PRINTA O NOME DO USUARIO DIGITADO
{
    char comp[MAX30];
    int i, j;

    if (x == 0)
    {
        printf("nao ha cadastros a serem mostrados\n"); // CASO NAO TENHA CADASTRO
    }
    else
    {
        printf("\nDigite o nome do usuario desejado:\n");
        scanf("%s%*c", comp); // NOME DO USUARIO CADASTRADO
        system("cls");
        for (i = 0; i < x; i++)
        {
            if (strcmp(comp, p[i].nome) == 0) // COMPARA SE STRING EH IGUAL
            {
                imprimir(p[i]); // FUNCAO QUE PRINTA OS CADASTROS
            }
            printf("\n"); // QUEBRA DE LINHA
        }
    }
}

void Printar_PrimeiraLetra(AGENDA *p, int x) // PRINTA TODOS CADASTRADOS QUE COMECEM COM TAL CARACTER
{
    char c;

    printf("\nDigite uma letra inicial dos nomes\n");
    scanf("%c%*c", &c); // DIGITAR O CARACTER A SER COMPARADO

    for (int i = 0; i < x; i++)
    {
        if (c == p[i].nome[0]) // COMPARA O PRIMEIRO CARACTERE DA STRING
        {
            imprimir(p[i]); // FUNCAO QUE PRINTA OS CADASTROS
        }
        printf("\n");
    }
}

int main()
{
    AGENDA v[MAX100];
    int op = 0, x = 0;

    while (op != 5)
    {
        print_options(&op);
        system("cls");

        switch (op)
        { // SWITCH CASE PARA AS OPCOES ESCOLHIDAS PELO USUARIO
        case 1:
            lerdados(v, x);
            x++; // VARIAVEL DE CONTROLE QUE SERA INCREMENTADA A CADA CADASTRO FEITO
            break;
        case 2:
            printar_cadastro(v, x);
            system("pause");
            system("cls");
            break;
        case 3:
            Printar_PrimeiraLetra(v, x);
            system("pause");
            system("cls");
            break;
        case 5:
            exit;
        default:
            printf("valor invalido\n");
            system("pause");
        }
    }
    return 0;
}