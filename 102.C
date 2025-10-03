// 2. Find average of N numbers using functions
#include <stdio.h>
float average(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return (float)sum / n;
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Average = %.2f\n", average(a, n));
    return 0;
}
