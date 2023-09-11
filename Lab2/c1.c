#include <stdio.h>
int main()
{
    int e, j1, j2;
    char campeao1, campeao2;

    // primeiro jogo
    scanf("%d %d %d", &e, &j1, &j2);
    if ((j1 + j2) % 2 == e)
        campeao1 = 'A';
    else
        campeao1 = 'B';

    // segundo jogo
    scanf("%d %d %d", &e, &j1, &j2);
    if ((j1 + j2) % 2 == e)
        campeao2 = 'C';
    else
        campeao2 = 'D';

    // terceiro jogo e final
    scanf("%d %d %d", &e, &j1, &j2);
    if ((j1 + j2) % 2 == e)
        printf("%c\n", campeao1);
    else
        printf("%c\n", campeao2);

    return 0;
}