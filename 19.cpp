#include <stdio.h>

int main() {
    int a, b, i, hasil = 1;

    printf("Masukkan angka dan pangkat: ");
    scanf("%d %d", &a, &b);

    for(i = 0; i < b; i++) {
        hasil *= a;
    }

    printf("Hasil: %d", hasil);
    return 0;
}