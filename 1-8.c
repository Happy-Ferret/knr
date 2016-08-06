#include <stdio.h>

int main() {
    int c, ns, nt, nl;
    ns = nt = nl = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
        case ' ':
            ns++; break;
        case '\t':
            nt++; break;
        case '\n':
            nl++; break;
        }
    }
    printf("spaces: %d, tabs: %d, newlines: %d\n", ns, nt, nl);
}
