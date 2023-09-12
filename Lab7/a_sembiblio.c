#include <stdio.h>
#include <string.h>

int main()
{

    char t[1000];
    int cont = 0;
    int i;

    scanf("%s", &t);

    for (i = 0; t[i] != '\0'; i++)
    {
        cont++;
    }

    printf("%d\n", cont);

    return 0;
}