#include <stdio.h>

int encaixa(int a, int b)
{
    int valora = a;
    int valorb = b;
    int x = 10;
    int check = 0;

    if (a == b)
    {
        check++;
    }
    else
    {
        while (valora / x != 0)
        {
            if (valora % x == valorb)
            {
                check++;
            }
            x *= 10;
        }
    }

    if (check > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int segmento(int a, int b)
{
    int check = 0;
    int valora = a;
    int valorb = b;
    int cont = 0;

    if (a == b)
    {
        check++;
    }

    else if (a > b)
    {
        for (int i = 0; valora != 0; i++)
        {
            if (encaixa(valora, b) == 1)
            {
                check++;
            }
            valora /= 10;
        }
    }
    else
    {
        for (int i = 0; valorb != 0; i++)
        {
            if (encaixa(valorb, a) == 1)
            {
                check++;
            }
            valorb /= 10;
        }
    }
    
    if (check > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
