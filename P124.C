// 24. Calculate perimeter of rectangle
#include <stdio.h>
int main() {
    float l, w;
    printf("Enter length and width: ");
    scanf("%f%f", &l, &w);
    printf("Perimeter = %.2f", 2 * (l + w));
    return 0;
}
