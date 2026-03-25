#include <stdio.h>

int main() {
    FILE *f = fopen("data.txt", "w");
    fprintf(f, "Hello File");
    fclose(f);
    return 0;
}