#include <stdio.h>

int main() {
    char a[50], b[50];
    int i = 0, j = 0;

    scanf("%s %s", a, b);

    while(a[i] != '\0') i++;

    while(b[j] != '\0') {
        a[i] = b[j];
        i++; j++;
    }

    a[i] = '\0';

    printf("Hasil: %s", a);
    return 0;
}