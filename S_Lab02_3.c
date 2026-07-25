#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int K;
    scanf("%d", &K);

    int dir[6], len[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d %d", &dir[i], &len[i]);
    }

    long long x[6], y[6];
    x[0] = 0;
    y[0] = 0;

    for (int i = 0; i < 6; i++) {
        long long nx = x[i];
        long long ny = y[i];

        switch (dir[i]) {
        case 1: nx += len[i]; break;
        case 2: nx -= len[i]; break;
        case 3: ny -= len[i]; break;
        case 4: ny += len[i]; break;
        }

        if (i + 1 < 6) {
            x[i + 1] = nx;
            y[i + 1] = ny;
        }

    }

    long long sum = 0;
    for (int i = 0; i < 6; i++) {
        int j = (i + 1) % 6;
        sum += x[i] * y[j] - x[j] * y[i];
    }
    if (sum < 0) sum = -sum;

    long long area = sum / 2;

    long long answer = area * (long long)K;

    printf("%lld\n", answer);

    return 0;
}