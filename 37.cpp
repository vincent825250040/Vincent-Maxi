#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[50];
    int i, j, found;

    scanf("%s %s", a, b);

    if(strlen(a) != strlen(b)) {
        printf("Bukan anagram");
        return 0;
    }

    for(i=0; a[i]; i++) {
        found = 0;
        for(j=0; b[j]; j++) {
            if(a[i] == b[j]) {
                b[j] = '*';
                found = 1;
                break;
            }
        }
        if(!found) {
            printf("Bukan anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}