// 90. Find maximum of three numbers
#include <stdio.h>
int main() {
    int a = 10, b = 25, c = 15;
    if (a >= b && a >= c)
        printf("Max = %d", a);
    else if (b >= a && b >= c)
        printf("Max = %d", b);
    else
        printf("Max = %d", c);
    return 0;
}
