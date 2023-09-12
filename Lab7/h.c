#include <stdio.h>

#define MAX_INPUT 10001
#define MAX_KEY 41

void substituir (char antiga[], char chave[], char palavra[]) {

    int nova_index = 0;
    char nova[MAX_INPUT];

    int tamanho_antiga = 0, tamanho_chave = 0, tamanho_palavra = 0;

    int achado;
    for (; antiga[tamanho_antiga]   != '\0'; tamanho_antiga++);
    for (; chave[tamanho_chave]     != '\0'; tamanho_chave++);
    for (; palavra[tamanho_palavra] != '\0'; tamanho_palavra++);
    for (int i = 0; antiga[i] != '\0'; i++) {


        if (antiga[i] == chave[0]) {


            achado = 1;


            for (int j = 0; chave[j] != '\0'; j++) {


                if (chave[j] != antiga[i+j]) {
                    achado = 0;
                    break;
                }

            }


            if (achado) {

                for (int i = 0; i < tamanho_palavra; i++) {
                    nova[nova_index] = palavra[i];
                    nova_index++;
                }

                i += tamanho_chave - 1;

            }

            else nova[nova_index++] = antiga[i];


        } else {

            nova[nova_index++] = antiga[i];

        }

    }


    if (nova[--nova_index] == '\n') nova[nova_index] = '\0';

    printf("%s\n", nova);

}

int main()
{

    char frase[MAX_INPUT], chave[MAX_KEY], palavra[MAX_KEY];

    fgets(frase, MAX_INPUT, stdin);

    scanf("%s %s", chave, palavra);

    substituir(frase, chave, palavra);

    return 0;
}