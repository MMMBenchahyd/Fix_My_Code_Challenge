#include <stdio.h>

// Custom isdigit function
int my_isdigit(int ch) {
    return ch >= '0' && ch <= '9';
}

int main() {
    char testChar1 = 5;
    char testChar2 = 'A';

    // Check if testChar1 is a digit
    if (my_isdigit(testChar1)) {
        printf("%c is a digit.\n", testChar1);
    } else {
        printf("%c is not a digit.\n", testChar1);
    }

    // Check if testChar2 is a digit
    if (my_isdigit(testChar2)) {
        printf("%c is a digit.\n", testChar2);
    } else {
        printf("%c is not a digit.\n", testChar2);
    }

    return 0;
}
