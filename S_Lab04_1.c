#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int map[101][101];

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int r = 0, c = 0;
    int num = 1;

    for (int diag = 0; diag < 2 * n - 1; diag++) {
        if (diag % 2 == 0) {

            while (r < n && c >= 0) {
                map[r][c] = num++;
                r++;
                c--;
            }

            if (r >= n) {
                r = n - 1;
                c += 2;
            }
            else {
                c = 0;
            }
        }
        else {

            while (r >= 0 && c < n) {
                map[r][c] = num++;
                r--;
                c++;
            }

            if (c >= n) {
                c = n - 1;
                r += 2;
            }
            else {
                r = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}