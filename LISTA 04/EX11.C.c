#include <stdio.h>

int mdc(int a, int b) {
    while(b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    printf("MDC = %d", mdc(n1, n2));

    return 0;
}