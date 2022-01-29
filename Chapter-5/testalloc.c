#define ALLOCSIZE 10000
#include <stdio.h>

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

int main() {
    char *alloc(int);
    void afree(char*);

    char *p = alloc(10);
    if (NULL == p) return -1;

    *p++ = 'H';
    *p++ = 'e';
    *p++ = 'l';
    *p++ = 'l';
    *p++ = 'o';
    *p++ = '\0';
    p -= 6;

    printf("%s\n", p);
    afree(p);
    printf("%s\n", p);
    p = alloc(10001);
    if (NULL == p)
            printf("overflow!\n");
    return 0;
}


char *alloc(int n) {
    if(allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else 
        return 0;
}

void afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}