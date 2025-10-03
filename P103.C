// 3. Convert binary to decimal using user-defined function
#include <stdio.h>
#include <math.h>
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while(binary > 0) {
        int rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}
int main() {
    int binary;
    printf("Enter binary number: ");
    scanf("%d", &binary);
    printf("Decimal = %d\n", binaryToDecimal(binary));
    return 0;
}
