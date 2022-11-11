#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void LerString(char str[], int *p)
{
    int i, x;
    scanf("%[^\n]%*c", str);
    x = strlen(str); // X RECEBE O TAMANHO DA STRING

    for (i = 0; i < x; i++)
    {
        if (str[i == '\0'])
        {
            *p = &str[i];
            exit;
        }
    }
}
int main()
{
    char str[100];
    int p;

    LerString(str, &p);
    printf("O endereco de memoria do caracter em branco eh: %d\n", p);

    return 0;
}