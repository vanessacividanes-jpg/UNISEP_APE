#include <stdio.h>

float fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float c;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    printf("Fahrenheit = %.2f", fahrenheit(c));

    return 0;
}