#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[51];
    scanf("%s", s);

    int seg[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
    int total = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int digit = s[i] - '0';
        total += seg[digit];
    }

    printf("%d\n", total);
    return 0;
}