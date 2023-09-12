#include <stdio.h>
#include <string.h>

int main()
{
    char forms[10];
    char teste[10];
    int check = 0;
    int res = 0;
    int cont = 0;

    while (scanf("%s", forms) != EOF)
    {

        if (strcmp(forms, "sim") == 0)
        {
            res++;
        }

        check++;

        if (check == 10)
        {
            if (res >= 2)
            {
                cont++;
            }
            check = 0;
            res = 0;
        }
    }

    printf("%d\n", cont);
    return 0;
}