#include <stdio.h>
int main()
{
    double x;
    double x1;
    double x2;
    double p1, p2;

    // lendo a media aritmetica ponderada
    scanf("%lf", &x);
    // lendo o segundo elemento do conjunto
    scanf("%lf", &x2);
    // lendo os pesos
    scanf("%lf %lf", &p1, &p2);

    // calculo do primeiro elemento
    x1 = (x * (p1 + p2) - x2 * p2) / p1;

    // imprime o resultado
    printf("%lf\n", x1);

    return 0;
}