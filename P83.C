// 83. Convert meters to kilometers
#include <stdio.h>
int main() {
    float meters;
    printf("Enter distance in meters: ");
    scanf("%f", &meters);
    printf("Distance in kilometers = %.2f", meters / 1000);
    return 0;
}
