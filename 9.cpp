#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    if (n <= 1) isPrime = 0;

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
        printf("Prima");
    else
        printf("Bukan Prima");

    return 0;
}