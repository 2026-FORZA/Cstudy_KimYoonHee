#def#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool is_prime[10000001];

int main(void) {
    int m, n;
    if (scanf("%d %d", &m, &n) != 2) return 0;

    for (int i = 2; i <= n; i++) {
        is_prime[i] = true;
    }

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = m; i <= n; i++) {
        if (is_prime[i]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}