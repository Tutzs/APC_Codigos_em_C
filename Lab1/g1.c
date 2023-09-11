#include <stdio.h>
int main()
{
    double pf;
    double lc, i;
    double cf; // custo

    // lendo preço final
    scanf("%lf", &pf);
    // lendo lucro e imposto
    scanf("%lf %lf", &lc, &i);

    lc = lc / 100;
    i = i / 100;
    // calculo do custo final
    cf = pf / (i + lc + 1);

    // imprime resultado :)
    printf("%lf\n", cf);

    return 0;
}