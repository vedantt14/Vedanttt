// 39. Convert meters to kilometers
#include <stdio.h>
int main() {
    float m;
    printf("Enter distance in meters: ");
    scanf("%f", &m);
    printf("Kilometers = %.2f", m / 1000);
    return 0;
}
