#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
int main(void)
{
	int a;
	int i = 0;
	scanf("%d", &a);
	while (i < a)
	{
		int b = 1;
		while (b <= a)
		{
			printf("*");
			b++;
		}

		i++;
		printf("\n");

	}

	return 0;
}