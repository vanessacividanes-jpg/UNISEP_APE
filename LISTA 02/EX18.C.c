#include <stdio.h>

int main() {
    int idade, soma = 0, contador = 0;
    float media;

    do {
        printf("Digite uma idade (0 para sair): ");
        scanf("%d", &idade);

        if(idade != 0) {
            soma += idade;
            contador++;
        }

    } while(idade != 0);

    media = (float)soma / contador;

    printf("Media = %.2f\n", media);

    return 0;
}