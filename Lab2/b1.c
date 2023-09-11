#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Empate");
    }
    else
    {
        if (a != b && b == c)
        { // vencedor A
            printf("A");
        }
        else
        {
            if (b != a && a == c)
            {
                printf("B");
            }
            else
            {
                if (c != a && a == b)
                {
                    printf("C");
                }
            }
        }
    }
    return 0;
}