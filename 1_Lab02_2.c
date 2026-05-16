#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
int main(void)
{
	int A, B, C, result;

	scanf("%d %d %d", &A, &B, &C);

	result = (A + B) % C;
	printf("%d\n", result);

	result = ((A % C) + (B % C)) % C;
	printf("%d\n", result);

	result = (A * B) % C;
	printf("%d\n", result);

	result = ((A % C) * (B % C)) % C;
	printf("%d\n", result);

	return 0;
}