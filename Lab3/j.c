#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int golpes, i;
    unsigned long long int tempo; 

    scanf("%llu %d", &tempo, &golpes); // Leitura dos tempo e da quantidade de golpes que o burro do Liu Kang dará

    for (i = 0; i < golpes; i++) // Laço que repetirá a quantidade de golpes inseridos no scanf
    {
        tempo = sqrt(tempo);
        if (tempo % 2 != 0) // Condição se a raiz quadrada do tempo for impar
        {                                   
            tempo = ((2 * tempo) - 1);  
            tempo = tempo * tempo;
        }
        else
        {
            if (tempo % 2 == 0) // Condição se a raiz quadrada do tempo for par
            {
                tempo = ((2 * tempo) - 1) / 2; 
                tempo = tempo * tempo;
            }
        }
        printf("%llu\n", tempo);
    }
        /* Liu Kang, você é muito burro, vá estudar matemática da próxima vez. */
    return 0;
}
