double potencia(double a, int b)
{
    double resultado = 1.0;
    for (int i = 0; i < b; i++)
        resultado *= a;

    if (b < 0)
        return 1.0 / resultado;
    else
        return resultado;
}

double fatorial(double fatorial) // Função que mostra o valor de qualquer número fatorial (n!).
{
    double resultado = 1.0; // Resultado iniciando com o valor 1.0 para que não seja feita a multiplicação de N da função exp_natural por 0.

    while (fatorial > 0) 
    {
        resultado *= fatorial; // Laço que repetirá a multiplicação do número fatorial. Por exemplo: 5! = 5.4.3.2.1 = 120.
        fatorial--;
    }

    return resultado; // Retorno da função. Ou seja, aqui seria a saída dos dados da função para ser utilizado ao chamá-la em fatorial() na função main, por exemplo.
}

double exp_natural(int x, int n)
{
    double resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado = resultado + potencia(x, i) / fatorial(i);
    }
    return resultado;
}