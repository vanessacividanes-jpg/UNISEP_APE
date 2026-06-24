#include <stdio.h>

int parOuImpar(int num) {
    if(num % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("%d", parOuImpar(num));

    return 0;
}