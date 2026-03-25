#include <stdio.h>

int main() {
    int pilih;

    printf("1. Halo\n2. Keluar\nPilih: ");
    scanf("%d", &pilih);

    if(pilih == 1)
        printf("Halo!");
    else
        printf("Keluar");

    return 0;
}