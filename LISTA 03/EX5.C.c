#include <stdio.h>

int main() {
    int v[6], i, menor;

    for(i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }

    menor = v[0];

    for(i = 1; i < 6; i++) {
        if(v[i] < menor)
            menor = v[i];
    }

    printf("Menor = %d", menor);

    return 0;
}