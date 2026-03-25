#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Nilai a: %d\n", a);
    printf("Alamat a: %p\n", p);
    printf("Isi pointer: %d", *p);

    return 0;
}