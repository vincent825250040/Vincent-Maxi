#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, isPal = 1;

    printf("Masukkan kata: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-i-1]) {
            isPal = 0;
            break;
        }
    }

    if(isPal)
        printf("Palindrome");
    else
        printf("Bukan palindrome");

    return 0;
}