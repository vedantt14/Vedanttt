// 95. Convert seconds to hours, minutes, seconds
#include <stdio.h>
int main() {
    int seconds, h, m, s;
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    h = seconds / 3600;
    m = (seconds % 3600) / 60;
    s = seconds % 60;
    printf("%d hours, %d minutes, %d seconds", h, m, s);
    return 0;
}
