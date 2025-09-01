#include <stdio.h>
#include <string.h>
#include <ctype.h>

int charToDigit(char c) {
    if (isdigit(c)) return c - '0';
    return 10 + (tolower(c) - 'a');
}

void printRoot(char *value, int base) {
    printf("(x - (%s base %d)) ", value, base);
}

int main() {
    int n = 10, k = 7;
    int m = k - 1;

    printf("Polynomial of degree %d:\n", m);

    printRoot("13444211440455345511", 6);
    printRoot("aed7015a346d635", 15);
    printRoot("6aeeb69631c227c", 15);
    printRoot("e1b5e05623d881f", 16);
    printRoot("316034514573652620673", 8);
    printRoot("2122212201122002221120200210011020220200", 3);

    printf("\n");
    return 0;
}
