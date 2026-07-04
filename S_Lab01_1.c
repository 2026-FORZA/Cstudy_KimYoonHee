#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);

    int count = 0;
    int answer = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (count == k) {
                answer = i;
                break;
            }
        }
    }

    printf("%d\n", answer);

    return 0;
}