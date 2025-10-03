// 100. Calculate percentage of 5 subjects
#include <stdio.h>
int main() {
    int s1 = 80, s2 = 75, s3 = 70, s4 = 85, s5 = 90;
    int total = s1 + s2 + s3 + s4 + s5;
    float percent = (total / 500.0) * 100;
    printf("Percentage = %.2f%%", percent);
    return 0;
}
