#include <stdio.h>

int strLen(char *);


int main() {
    printf("%d", strLen("hello, world"));
}


int strLen(char *s) {
    int n;
    for (n = 0; *s != '\0'; s++) 
        n++;
    return n;
}