#include <stdio.h>

void print_alphabet_x10(void) {
    char letter = 'a';
    
    for (int i = 0; i < 10; i++) {
        for (; letter <= 'z'; letter++) {
            _putchar(letter);
        }
        letter = 'a'; // Reset letter to 'a' for the next iteration
    }
    
    _putchar('\n');
}
