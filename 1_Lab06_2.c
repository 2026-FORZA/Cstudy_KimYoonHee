#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    while (1)
    {
        ch = getchar();

        if (ch == '\n' || ch == EOF)
        {
            break; 
        }

        count++;
    }

    printf("%d\n", count);

    return 0;
}