#include <stdio.h>

int main() {
    void strcpy1(char*, char*);
    void strcpy2(char*, char*);
    void strcpy3(char*, char*);

    char t[] = "Hello, World";
    char s[100];
    strcpy1(s, t);
    printf("%s\n", s);
}

void strcpy1(char *s, char *t) {
    int i;
    i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}

void strcpy2(char *s, char *t) {
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}

void strcp3(char *s, char *t) {
    while ((*s++ = *t++) != '\0')
        ;
}