// 31. Calculate discount on product
#include <stdio.h>
int main() {
    float price, discount;
    printf("Enter price: ");
    scanf("%f", &price);
    discount = price * 0.1;  // 10%
    printf("Discount = %.2f", discount);
    return 0;
}
