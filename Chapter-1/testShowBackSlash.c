#include <stdio.h>

int main() {
    int c;
    c = getchar();
    while(c != EOF) {
        if(c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else if(c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if(c == '\n') {
            putchar('\\');
            putchar('n');
        }
        else putchar(c);
        c = getchar();
    }
    return 0;
}