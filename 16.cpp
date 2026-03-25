#include <stdio.h>

int main() {
    char str[100];
    int i, vokal = 0;

    printf("Masukkan kata: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='i'||str[i]=='u'||str[i]=='e'||str[i]=='o')
            vokal++;
    }

    printf("Jumlah vokal: %d", vokal);
    return 0;
}