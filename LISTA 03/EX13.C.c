#include <stdio.h>

int main() {
    int v[10], i, j;
    int numero, maiorFreq = 0, freq;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    numero = v[0];

    for(i = 0; i < 10; i++) {
        freq = 0;

        for(j = 0; j < 10; j++) {
            if(v[i] == v[j])
                freq++;
        }

        if(freq > maiorFreq) {
            maiorFreq = freq;
            numero = v[i];
        }
    }

    printf("Numero que mais se repete: %d", numero);

    return 0;
}