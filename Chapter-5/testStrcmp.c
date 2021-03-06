#include <stdio.h>
#include <string.h>

int main() {
    int strcmp1(char *, char *);
    char *s = "Hellp";
    char *t = "Hello";
    int diff = strcmp1(s, t);
    printf("%d\n", diff);
}

int strcmp1(char *s, char *t) {
    int i;
    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}

int strcmp2(char *s, char *t) {
    for(; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return *s - *t;
}