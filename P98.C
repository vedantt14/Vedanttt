// 98. Convert minutes to hours and minutes
#include <stdio.h>
int main() {
    int min, hours;
    printf("Enter total minutes: ");
    scanf("%d", &min);
    hours = min / 60;
    min = min % 60;
    printf("%d hours and %d minutes", hours, min);
    return 0;
}
