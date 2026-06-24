#include <stdio.h>

int main() {
    int v[10], i, soma = 0;
    float media;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    media = soma / 10.0;

    printf("Valores maiores que a media:\n");

    for(i = 0; i < 10; i++) {
        if(v[i] > media)
            printf("%d ", v[i]);
    }

    return 0;
}