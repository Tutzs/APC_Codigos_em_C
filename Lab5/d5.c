#include <stdio.h>
double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double vm;              // velocidade media
    double sub, sub1, sub2; // subtração dos radares;

    sub = tB / 3600;
    sub1 = tA / 3600;
    sub2 = sub - sub1;
    vm = distancia / sub2;

    return vm;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
    if (calculaVelocidadeMedia(tA, tB, distancia) > velocidadeMaxima)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}