#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int score[1000][1000];
int max_score[1000];

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    for (int i = 0; i < n; i++) {
        int mx = 0;
        for (int j = 0; j < m; j++) {
            scanf("%d", &score[i][j]);
            if (score[i][j] > mx) {
                mx = score[i][j];
            }
        }
        max_score[i] = mx;
    }

    for (int k = 0; k < m; k++) {
        int ans = 0;
        for (int i = 0; i < n; i++) {

            if (score[i][k] < max_score[i]) {
                ans++;
            }
        }
        printf("%d ", ans);
    }
    printf("\n");

    return 0;
}