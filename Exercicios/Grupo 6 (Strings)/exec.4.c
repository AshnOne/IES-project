#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct{
    char nome[MAX];
    int idade;
    char endereco[MAX];
    char telefone[MAX];
}Pessoa;

void LerDados(Pessoa *p) //leitura
{
    printf("Nome:");
    scanf("%[^\n]", p->nome);

    printf("Idade:");
    scanf("%d%*c", &p->idade);

    printf("Endereco:");
    scanf("%[^\n]%*c", p->endereco);

    printf("Telefone:");
    scanf("%[^\n]", p->telefone);
    printf("\n");
}

void show(Pessoa p) //showtime
{
    printf("Seu nome e %s, voce tem %d anos, mora na rua %s e seu telefone e %s\n", p.nome, p.idade, p.endereco, p.telefone);
}

int main()
{
    Pessoa p;

    LerDados(&p);

    show(p);

    return 0;
}
