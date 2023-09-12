#include <stdio.h>
int validaPeso(double pesoKg)
{
    if (pesoKg > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void fazTonelada(double pesoKg)
{
    double t; // tonelada
    t = pesoKg / 1000;
    printf("%.4lf\n", t);
}

void fazGrama(double pesoKg)
{
    double grama;
    grama = pesoKg * 1000;
    printf("%.4lf\n", grama);
}