#include <stdio.h>

int contarVogais(char str[]) {
    int i = 0;
    int cont = 0;

    while(str[i] != '\0') {

        if(str[i] == 'a' || str[i] == 'e' ||
           str[i] == 'i' || str[i] == 'o' ||
           str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U') {

            cont++;
        }

        i++;
    }

    return cont;
}

int main() {
    char texto[100];

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Quantidade de vogais = %d", contarVogais(texto));

    return 0;
}