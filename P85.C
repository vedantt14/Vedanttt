// 85. Swap two numbers using a third variable
#include <stdio.h>
int main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d", a, b);
    return 0;
}
