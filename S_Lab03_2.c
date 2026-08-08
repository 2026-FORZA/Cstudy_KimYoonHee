#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[10001];
    int koi = 0, ioi = 0;

    if (scanf("%s", str) == 1) {
        int len = strlen(str);

        for (int i = 0; i < len - 2; i++) {
            if (str[i] == 'K' && str[i + 1] == 'O' && str[i + 2] == 'I') {
                koi++;
            }
            if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I') {
                ioi++;
            }
        }
    }

    printf("%d\n%d\n", koi, ioi);

    return 0;
}