#include <stdio.h>

int print_last_digit(int num) {
    int lastDigit = num % 10;
    printf("The last digit of %d is %d.\n", num, lastDigit);
    return lastDigit;
}
