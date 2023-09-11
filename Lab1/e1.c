#include <stdio.h>
int main()
{
    int cc, a, b, c, d, e, f; // cc= conta corrente
    int c1;                   // calculo
    int dv;                   // digito verificador
    scanf("%d", &cc);

    a = cc / 100000;
    b = (cc % 100000) / 10000;
    c = (cc % 10000) / 1000;
    d = (cc % 1000) / 100;
    e = (cc % 100) / 10;
    f = (cc % 10);

    c1 = a * 7 + b * 6 + c * 5 + d * 4 + e * 3 + f * 2;
    dv = 11 - (c1 % 11);
    
    printf("%d\n", dv);
    return 0;
}