#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    int umur;
};

int main() {
    struct Mahasiswa m;

    printf("Nama: ");
    scanf("%s", m.nama);
    printf("Umur: ");
    scanf("%d", &m.umur);

    printf("Nama: %s, Umur: %d", m.nama, m.umur);
    return 0;
}