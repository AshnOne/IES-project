#include <stdio.h>
#include <string.h>
#define MAX 140

void LerString(char str[MAX])
{
    scanf("%[^\n]%*c", str);
}

void show(char str[MAX])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')printf("\n");
        else printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char str[MAX];

    LerString(str);

    show(str);
    return 0;
}
