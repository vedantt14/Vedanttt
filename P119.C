// 19. Average of 5 numbers
#include <stdio.h>
int main() {
    int a, b, c, d, e;
    printf("Enter 5 numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("Average = %.2f", (a + b + c + d + e) / 5.0);
    return 0;
}
