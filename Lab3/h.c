#include <stdio.h>
#include <math.h>

char verificaprimo(int n)
{
    int resultado = 0, raiz = sqrt(n);

    for (int a = 2; a <= raiz; a++)
    {
        if (n % a == 0)
        {
            resultado = 1;
            return 'N';
            break;
        }
    }
    if (resultado == 0)
    {
        return 'S';
    }
    // Função verificadora se o número é primo usando a a biblioteca "math.h".
}

int main()
{
    int quantidade, valores, j;

    scanf("%d", &quantidade); // Aqui recebe a quantidade de "casas" que a variável terá no array.
    char resultado[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &valores); // Aqui são os valores alocados em cada "casa" do array.
        while (valores != 0)   // Condição para verificar se é primo arrojado em conjunto com o número primo declarado na função verificaprimo(n).
        {
            if ((verificaprimo(valores) == 'S' || valores == 2 || valores == 3 || valores == 5 || valores == 7) && valores != 1) // Aqui eu chamo a função verificaprimo(n)
            {
                resultado[i] = 'S'; // Aqui entra no caso de verificação se é primo arrojado ou não
            }                       // agregando um caracter 'S' ou 'N' e depois decompondo o valor.
            else                    // Entrando novamente no laço e repetindo esse processo enquanto
            {                       // a variável "valores" for diferente de 0.
                resultado[i] = 'N';
                break;
            }
            valores /= 10;
        }
    }

    for (j = 0; j < quantidade; j++)
    {
        printf("%c\n", resultado[j]); // Imprime os valores 'S' ou 'N'.
    }

    return 0;
}