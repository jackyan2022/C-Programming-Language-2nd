#include <stdio.h>

char *month_name(int);

int main() {
    char *n = month_name(1);
    printf("%s", n);
}

char *month_name(int n) {
    static char *name[] = {
        "Illegal month",
        "January", "Februrary", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };
    return (n < 1 || n > 12) ? name[0] : name[n];
}