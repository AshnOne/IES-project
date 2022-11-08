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

void print_options(int *op) // PRINTA OPCOES E SELECIONA OP ESCOLHIDA
{ // printa as opcoes da agenda
    printf("Digite o numero da escolha desejada:\n");
    printf("1. Entrar um novo nome na agenda.\n");
    printf("2. Imprimir na tela os dados de uma das pessoas cadastradas.\n");
    printf("3. Imprimir a lista de nomes cadastrados que comecem pela letra indicada.\n");
    printf("5. Sair\n");
    scanf("%d%*c", op);
}
void lerdados(AGENDA *p) //LÊ DADOS DO CADASTRO
{ // scaneia os dados
    printf("Digite o nome:\n");
    scanf("%[^\n]%*c", p->nome);
    printf("Digite o endereco:\n");
    scanf("%[^\n]%*c", p->endereco);
    printf("Digite o telefone:\n");
    scanf("%[^\n]%*c", p->fone);
    printf("Digite o CEP:\n");
    scanf("%d%*c", &p->cep);
    system("cls");
}
void printar_cadastro(AGENDA *p, int x) //PRINTA O NOME DO USUARIO DIGITADO
{
    char comp[MAX30];
    int i, j;

    if (x == 0)
    {
        printf("nao ha cadastros a serem mostrados\n"); //CASO NAO TENHA CADASTRO
    }
    else
    {
        printf("Digite o nome do usuario desejado:\n");
        scanf("%s%*c", comp); //NOME DO USUARIO CADASTRADO
        system("cls");
        for (i = 0, j = 0; i < x; i++, j++)
        {
            if (strcmp(comp, p[j].nome) == 0) // COMPARA SE STRING EH IGUAL
            {
                printf("******USUARIO CADASTRADO******\n");
                printf("NOME: %s\n", p[j].nome);
                printf("ENDERECO: %s\n", p[j].endereco);
                printf("FONE: %s\n", p[j].fone);
                printf("CEP: %d\n", p[j].cep);
            }
        }
    }
}

void Printar_PrimeiraLetra(AGENDA *p, int x) // PRINTA TODOS CADASTRADOS QUE COMECEM COM TAL CARACTER
{
    char c[MAX1];

    printf("Digite uma letra inicial dos nomes\n");
    scanf("%s%*c", c); //CARACTER A SER COMPARADO

    for (int i = 0; i < x; i++)
    {
        if (strncmp(c, p[i].nome, 1) == 0) //COMPARA O PRIMEIRO CARACTERE DA STRING
        {
            printf("******USUARIO CADASTRADO******\n"); //********NAO PRINTA TODOS CADASTROS MAS SO O ULTIMO!!!!!!!!!!!!!!!!!!!!!!!!!!
            printf("NOME: %s\n", p[i].nome);
            printf("ENDERECO: %s\n", p[i].endereco);
            printf("FONE: %s\n", p[i].fone);
            printf("CEP: %d\n", p[i].cep);
        }
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
        {
        case 1:
            lerdados(v);
            x++;
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

    /*   do
       {
           print_options(&op);
           system("cls");
           if (op == 1)
           {
               do
               {
                   lerdados(v);
                   op = 0;
                   x++;
               } while (op == 1);
           }
           else
           {
               if (op == 2)
               {
                   printar_cadastro(v, x);
                   op = 0;
                   system("pause");
               }
               else
               {
                   if (op == 3)
                   {
                       Printar_PrimeiraLetra(v, x);
                       op = 0;
                   }
               }
           }
       } while (op != 5);*/
    return 0;
}