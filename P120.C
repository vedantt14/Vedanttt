// 20. Sum and average of 3 input numbers
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    float avg = sum / 3.0;
    printf("Sum = %d, Average = %.2f", sum, avg);
    return 0;
}
