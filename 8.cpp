#include <stdio.h>

int main() {
    int n, balik = 0, sisa;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    while(n != 0) {
        sisa = n % 10;
        balik = balik * 10 + sisa;
        n /= 10;
    }

    printf("Hasil: %d", balik);
    return 0;
}