#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
int main(void)
{
	int a;
	int b = 1;
	scanf("%d", &a);

	while (b <= a)
	{
		printf("%d ", b);
		b++;
	}
	return 0;
}