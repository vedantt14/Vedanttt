// 21. Find the percentage of 3 subjects
#include <stdio.h>
int main() {
    int m1, m2, m3;
    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);
    float percent = (m1 + m2 + m3) / 3.0;
    printf("Percentage = %.2f%%", percent);
    return 0;
}
