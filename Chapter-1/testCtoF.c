#include <stdio.h>

/* print Celsius-Fahrenheit table for fahr = 0, 20, ..., 300 */
int main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = -20;
    upper = 20;
    step = 1;
    celsius = lower;
    printf("%s\t%s\n", "Celsius", "Fahr");
    while (celsius <= upper) {
        fahr = celsius * 9 / 5 + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}