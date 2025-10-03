// 1. Add N numbers using array and loop
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}
