#include <stdio.h>

int primo(int n) {
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i < n; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num;

    scanf("%d", &num);

    if(primo(num))
        printf("Primo");
    else
        printf("Nao primo");

    return 0;
}