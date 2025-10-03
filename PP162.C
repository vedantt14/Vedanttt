#include <stdio.h>
int main() {
    for(char c = 'a'; c <= 'z'; c++) {
        printf("%c -> %c\n", c, c - 32);
    }
    return 0;
}
