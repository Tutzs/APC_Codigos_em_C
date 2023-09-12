#include <stdio.h>

int main()
{
    long int menor, segmenor, termenor;
    long int n, vetor[10000]; 
 
    scanf("%ld", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &vetor[i]);
    }

    menor = vetor;
    segmenor = vetor;
    termenor = vetor;

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] < menor)
        {
            termenor = segmenor;
            segmenor = menor;
            menor = vetor[i];
        }
        else if (vetor[i] < segmenor)
        {
            termenor = segmenor;
            segmenor = vetor[i];
        }
        else if (vetor[i] < termenor)
        {
            termenor = vetor[i];
        }
    }

    printf("%ld\n", segmenor);
    printf("%ld\n", termenor);

    return 0;
}
