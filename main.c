#include <stdio.h>

int multiply ( int a, int b );

int main(void) {
    int a;
    int b;

    printf("Input two numbers to be multiplied: ");

    scanf("%d", &a);
    scanf("%d", &b);

    printf("Result of multiply operation (%d * %d) = %d)",
        a, b, multiply(a, b));

    getchar();
    return 0;
}

int multiply(int a, int b) {
    return a * b;
}
