#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int start, end;

    char* str = (char*)malloc(sizeof(char) * 101);

    scanf("%s", str);
    scanf("%d %d", &start, &end);

    for (int i = start - 1; i < end; i++) {
        
        printf("%c", *(str + i));
    }
    printf("\n");

    free(str);

    return 0;
}