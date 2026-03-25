#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Masukkan: angka operator angka (contoh 2 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("%d", a+b); break;
        case '-': printf("%d", a-b); break;
        case '*': printf("%d", a*b); break;
        case '/': printf("%d", a/b); break;
        default: printf("Operator tidak valid");
    }

    return 0;
}