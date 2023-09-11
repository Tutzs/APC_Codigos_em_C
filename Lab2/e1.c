#include <stdio.h>
int main()
{
    unsigned long long int cpf1; // cpf1 = cpf com todos os 11 digitos
    int soma1, soma2, resto, dv1, dv2, cpf, i;
    int d1, d2; // digito 1 e digito 2, na hora de validar
    scanf("%llu", &cpf1);

    // calculo do digito verificador
    cpf = cpf1 / 100; // calculo para tirar os dois digitos finais
    soma1 = 0;
    soma2 = 0;
    i = 2;
    while (i <= 10)
    {
        soma1 += i * (cpf % 10);
        soma2 += (i + 1) * (cpf % 10);
        cpf /= 10;
        i++;
    }
    // digito verificador 1
    resto = soma1 % 11;
    if (resto == 0 || resto == 1)
    {
        dv1 = 0;
    }
    else
    {
        dv1 = 11 - resto;
    }
    // digito verificador 2
    soma2 += 2 * dv1;
    resto = soma2 % 11;
    if (resto == 0 || resto == 1)
    {
        dv2 = 0;
    }
    else
    {
        dv2 = 11 - resto;
    }
    // validaçao
    d1 = (cpf1 / 10) % 10;
    d2 = (cpf1 % 10);
    if (d1 == dv1 && d2 == dv2)
    {
        printf("valido\n");
    }
    else
    {
        printf("invalido\n");
    }

    return 0;
}