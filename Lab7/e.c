#include <stdio.h>
int main()
{
    char t[100];
    int tam = 0;

    while (scanf("%s", t) != EOF)
    {
        for (int i = 0; t[i] != '\0'; i++)
        {
            if (t[i] == 'o')
            {
                tam++;
            }
        }
    }

    printf("%d\n", tam);

    return 0;
}