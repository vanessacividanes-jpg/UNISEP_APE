#include <stdio.h>

int main() {
    float peso;

    printf("Digite o peso da encomenda (kg): ");
    scanf("%f", &peso);

    if (peso <= 5)
        printf("Frete: R$ 10.00\n");
    else if (peso <= 20)
        printf("Frete: R$ 20.00\n");
    else
        printf("Frete: R$ 50.00\n");

    return 0;
}