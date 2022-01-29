#include <stdio.h>

void swap(int *, int *);

int main() {
    int x = 1;
    int y = 2;
    printf("Before swap: x is %d, y is %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x is %d, y is %d", x, y);
}

void swap(int *px, int *py) 
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}