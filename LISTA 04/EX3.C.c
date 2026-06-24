#include <stdio.h>

int quadrado(int num) {
    return num * num;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Quadrado = %d", quadrado(num));

    return 0;
}