#include <stdio.h>

int main() {
    int c, d;
    while ((d = (c = getchar()) != EOF)) {
        printf("c = %d, d = %d\n", c, d);
    }
    printf("c = %d, d = %d\n", c, d);
}
