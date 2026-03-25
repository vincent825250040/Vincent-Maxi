#include <stdio.h>

int main() {
    int n, i;
    int faktorial = 1;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        faktorial *= i;
    }

    printf("Faktorial: %d", faktorial);
    return 0;
}