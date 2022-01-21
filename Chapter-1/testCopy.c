#include <stdio.h>

int main() {
    int c;
    c = getchar();
    printf("EOF is %d\n", EOF);
    while(c != EOF) {
        putchar(c);
        c = getchar();
        printf(" getchar is EOF is %d\n", getchar() != EOF);
    }
    return 0;
}