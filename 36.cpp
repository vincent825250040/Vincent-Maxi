#include <stdio.h>

int main() {
    char str[100], c;
    int i, count = 0;

    scanf("%s", str);
    printf("Cari karakter: ");
    scanf(" %c", &c);

    for(i=0; str[i]!='\0'; i++) {
        if(str[i] == c)
            count++;
    }

    printf("Jumlah: %d", count);
    return 0;
}