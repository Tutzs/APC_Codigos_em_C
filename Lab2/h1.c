#include <stdio.h>
int main()
{
    int b, t;
    int aret;  // area retangulo
    int atrap; // area trapezio
    scanf("%d %d", &b, &t);
    aret = (70 * 160) / 2; // metade da area do retangulo
    atrap = (70 * (b + t)) / 2;
    if (atrap == aret)
    {
        printf("0\n");
    }
    else
    {
        if (atrap > aret)
        {
            printf("1\n");
        }
        else
        {
            if (atrap < aret)
            {
                printf("2\n");
            }
        }
    }

    return 0;
}