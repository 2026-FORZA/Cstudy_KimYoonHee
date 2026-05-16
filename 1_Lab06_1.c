#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h>
#include <ctype.h> 

int main(void)
{
    char str[1000];
    scanf("%s", str); 

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) {
        
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) {
           
            str[i] = toupper(str[i]);
        }
    }

    printf("%s", str);
	return 0;
}