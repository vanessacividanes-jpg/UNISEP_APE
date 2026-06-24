#include <stdio.h>

int main() {
    int v[8], i, soma = 0;

    for(i = 0; i < 8; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("Soma = %d", soma);

    return 0;
}