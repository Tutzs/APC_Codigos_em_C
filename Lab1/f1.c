#include <stdio.h>
int main()
{
    double vl, vi; // vl=valor da porcentagem de lucro, vi= valor da porcentagem do imposto
    double c;      // custo de fabrica
    double pf;     // preço final
    // lendo custo de fabrica
    scanf("%lf", &c);
    // lendo lucro e imposto em porcentagem
    scanf("%lf %lf", &vl, &vi);

    vl = vl / 100;
    vi = vi / 100;

    // calculo preco final
    pf = c * (1 + vl + vi);

    printf("%.2lf\n", pf);

    return 0;
}