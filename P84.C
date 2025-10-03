// 84. Convert days to weeks and days
#include <stdio.h>
int main() {
    int days, weeks;
    printf("Enter total days: ");
    scanf("%d", &days);
    weeks = days / 7;
    days = days % 7;
    printf("Weeks: %d, Days: %d", weeks, days);
    return 0;
}
