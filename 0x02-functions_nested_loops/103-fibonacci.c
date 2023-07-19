#include <stdio.h>

int main() {
    int firstTerm = 1;
    int secondTerm = 2;
    int nextTerm = 0;
    int sum = 2; // Start with 2 to account for the second term being even

    while (nextTerm <= 4000000) {
        nextTerm = firstTerm + secondTerm;
        if (nextTerm % 2 == 0) {
            sum += nextTerm;
        }
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("The sum of even-valued terms in the Fibonacci sequence is %d.\n", sum);
    return 0;
}
