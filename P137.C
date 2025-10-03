// 37. Calculate average using loop
#include <stdio.h>
int main() {
    int n, sum = 0, val;
    printf("How many numbers? ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &val);
        sum += val;
    }
    printf("Average = %.2f", (float)sum / n);
    return 0;
}
