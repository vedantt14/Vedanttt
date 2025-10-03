// 82. Convert kilometers to meters
#include <stdio.h>
int main() {
    float km;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    printf("Distance in meters = %.2f", km * 1000);
    return 0;
}
