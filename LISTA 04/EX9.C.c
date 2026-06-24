#include <stdio.h>
#include <string.h>

void inverter(char str[]) {
    int i;
    int tam = strlen(str);
    char aux;

    for(i = 0; i < tam / 2; i++) {
        aux = str[i];
        str[i] = str[tam - 1 - i];
        str[tam - 1 - i] = aux;
    }
}

int main() {
    char texto[100];

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    inverter(texto);

    printf("Invertida: %s", texto);

    return 0;
}