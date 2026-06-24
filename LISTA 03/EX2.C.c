#include <stdio.h>

int main() {
    int v[10], i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++) {
        if(v[i] % 2 == 0)
            printf("%d ", v[i]);
    }

    return 0;
}