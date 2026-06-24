#include <stdio.h>

int main() {
    int inicio, fim, i;

    printf("Digite dois numeros: ");
    scanf("%d %d", &inicio, &fim);

    for(i = inicio; i <= fim; i++) {
        printf("%d\n", i);
    }

    return 0;
}