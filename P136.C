// 36. Electricity bill calculator (simple)
#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    bill = units * 5; // ₹5 per unit
    printf("Bill = ₹%.2f", bill);
    return 0;
}
