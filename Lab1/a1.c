#include <stdio.h>
int main()
{
    double p1, p2, p3;
    double t;
    double l1, l2, l3, l4, l5;
    double mf, ml;

    // lendo as notas das provas(p1,p2,p3)
    scanf("%lf %lf %lf", &p1, &p2, &p3);
    // lendo a nota do trabalho(t)
    scanf("%lf", &t);
    // lendo as notas das listas(l1,l2,l3,l4,l5)
    scanf("%lf %lf %lf %lf %lf", &l1, &l2, &l3, &l4, &l5);

    // calcula a media das listas
    ml = (l1 + l2 + l3 + l4 + l5) / 10.0;
    // calcula a media final
    mf = (p1 + 2.0 * p2 + 3.0 * p3 + 2.0 * t) / 8.0 + ml;

    // imprime o resultado
    printf("%.2lf\n", mf);
    
    return 0;
}