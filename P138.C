// 38. Area and perimeter of circle
#include <stdio.h>
#define PI 3.14
int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", PI * r * r);
    printf("Perimeter = %.2f", 2 * PI * r);
    return 0;
}
