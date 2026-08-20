#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pas[31][31];

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;


    for (int i = 0; i < n; i++) {
        pas[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
        }
    }

    if (m == 1) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                printf("%d ", pas[i][j]);
            }
            printf("\n");
        }
    }
    else if (m == 2) {

        for (int i = n - 1; i >= 0; i--) {
            for (int k = 0; k < n - 1 - i; k++) {
                printf(" ");
            }
            for (int j = 0; j <= i; j++) {
                printf("%d ", pas[i][j]);
            }
            printf("\n");
        }
    }
    else if (m == 3) {

        for (int j = n - 1; j >= 0; j--) {
            for (int i = n - 1; i >= j; i--) {
                printf("%d ", pas[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}