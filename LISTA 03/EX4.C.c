#include <stdio.h>

int main() {
    int v[6], i, maior;

    for(i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }

    maior = v[0];

    for(i = 1; i < 6; i++) {
        if(v[i] > maior)
            maior = v[i];
    }

    printf("Maior = %d", maior);

    return 0;
}