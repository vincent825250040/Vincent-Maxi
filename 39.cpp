#include <stdio.h>

int main() {
    FILE *f = fopen("data.txt", "r");
    char str[100];

    fgets(str, 100, f);
    printf("%s", str);

    fclose(f);
    return 0;
}