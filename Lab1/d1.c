#include <stdio.h>
int main()
{
    double h;
    double m;
    double s;

    scanf("%lf", &h); // lendo horas

    m = 60 * h;   // calculo do minuto
    s = 3600 * h; // calculo do segundo

    printf("%.lf\n%.lf", m, s);

    return 0;
}