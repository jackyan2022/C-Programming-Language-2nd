#include <stdio.h>
#include <stdbool.h>

int main() {
    int c;
    bool hasBlank;
    hasBlank = false;
    c = getchar();
    if(c == ' ') hasBlank = true;
    while(c != EOF) {
        if(c != ' ' || !hasBlank) putchar(c);
        if(c == ' ') hasBlank = true;
        else hasBlank = false;
        c = getchar();
    }
    return 0;
}