#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Jumlah data: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Total: %d", sum);
    return 0;
}