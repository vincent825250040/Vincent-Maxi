#include <stdio.h>

int main() {
    float a, b, c;
    printf("Masukkan 3 angka: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Rata-rata: %.2f", (a + b + c) / 3);
    return 0;
}