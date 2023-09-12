#include <stdio.h>
#include <math.h>

struct tipoPonto
{
    int pa; // ponto a
    int pb; // ponto b
};

double distancia(struct tipoPonto pa, struct tipoPonto pb)
{
    struct tipoPonto pontoa, pontob;
    double d; // distancia
    int xb, yb;
    int el1, el2;

    xb = pontoa.pb - pontoa.pa;
    yb = pontob.pb - pontob.pa;
    el1 = pow(xb, 2);
    el2 = pow(yb, 2);

    d = sqrt(el1 + el2);

    return d;
}
