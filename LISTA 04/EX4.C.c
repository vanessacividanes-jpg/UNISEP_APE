#include <stdio.h>

int maior(int a, int b, int c) {
    int maior = a;

    if(b > maior)
        maior = b;

    if(c > maior)
        maior = c;

    return maior;
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("Maior = %d", maior(a, b, c));

    return 0;
}