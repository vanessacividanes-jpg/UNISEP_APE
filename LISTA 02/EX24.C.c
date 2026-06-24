#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 1)
        primo = 0;

    for(i = 2; i < num; i++) {
        if(num % i == 0)
            primo = 0;
    }

    if(primo)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");

    return 0;
}