#include <stdio.h>

int main() {
    int arr[100], n, i, cari, ketemu = 0;

    printf("Jumlah data: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Cari angka: ");
    scanf("%d", &cari);

    for(i = 0; i < n; i++) {
        if(arr[i] == cari) {
            ketemu = 1;
            break;
        }
    }

    if(ketemu)
        printf("Ditemukan");
    else
        printf("Tidak ditemukan");

    return 0;
}