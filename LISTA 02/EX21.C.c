#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n1 - Ola\n");
        printf("2 - Tudo bem?\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Ola!\n");
                break;
            case 2:
                printf("Tudo bem?\n");
                break;
        }

    } while(opcao != 3);

    return 0;
}