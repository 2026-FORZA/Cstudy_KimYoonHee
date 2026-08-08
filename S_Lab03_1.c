#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    int ones = num2 % 10;
    int tens = (num2 / 10) % 10;
    int hundreds = num2 / 100;

    printf("%d\n", num1 * ones);
    printf("%d\n", num1 * tens);
    printf("%d\n", num1 * hundreds);
    printf("%d\n", num1 * num2);

    return 0;
}