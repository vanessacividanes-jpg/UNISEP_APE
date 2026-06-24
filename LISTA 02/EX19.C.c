#include <stdio.h>

int main() {
    int num, maior = 0;

    do {
        printf("Digite um numero (999 para sair): ");
        scanf("%d", &num);

        if(num > maior && num != 999)
            maior = num;

    } while(num != 999);

    printf("Maior numero = %d\n", maior);

    return 0;
}