// 91. Calculate power of a number
#include <stdio.h>
int main() {
    int base = 2, exp = 3, result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    printf("Power = %d", result);
    return 0;
}
