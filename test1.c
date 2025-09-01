#include <stdio.h>
#include <string.h>
#include <math.h>

int toDecimal(char *value, int base) {
    int len = strlen(value);
    int num = 0, power = 1;
    for (int i = len - 1; i >= 0; i--) {
        int digit = value[i] - '0';
        num += digit * power;
        power *= base;
    }
    return num;
}

int main() {
    int n = 4, k = 3;   

    int roots[4];
    roots[0] = toDecimal("4", 10);     
    roots[1] = toDecimal("111", 2);    
    roots[2] = toDecimal("12", 10);    
    roots[3] = toDecimal("213", 4);    

    int m = k - 1;

    int r1 = roots[0];
    int r2 = roots[1];

    int a = 1;
    int b = -(r1 + r2);
    int c = r1 * r2;

    printf("Polynomial coefficients: %d %d %d\n", a, b, c);

    return 0;
}
