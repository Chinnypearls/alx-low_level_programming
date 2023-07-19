#include <stdio.h>

void print_fibonacci(int n) {
    int firstTerm = 1;
    int secondTerm = 2;
    int nextTerm;

    printf("%d, %d", firstTerm, secondTerm);

    for (int i = 3; i <= n; i++) {
        nextTerm = firstTerm + secondTerm;
        printf(", %d", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");
}

int main() {
    int numTerms = 98;
    print_fibonacci(numTerms);

    return 0;
}
