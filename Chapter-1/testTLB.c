#include <stdio.h>

int main()
{
    int c, nl, nt, nb;
    nl  = nt = nb = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++nb;
    }
    printf("New Line is %d\n", nl);
    printf("New Tab is %d\n", nt);
    printf("New space is %d\n", nb);
    return 0;
}