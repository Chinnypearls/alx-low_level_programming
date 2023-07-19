#include <stdio.h>

int main() {
    int fibonacci[50];
    fibonacci[0] = 1;
    fibonacci[1] = 2;

    for (int i = 2; i < 50; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    for (int i = 0; i < 49; i++) {
        printf("%d, ", fibonacci[i]);
    }
    printf("%d\n", fibonacci[49]);

    return 0;
}
