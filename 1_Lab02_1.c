#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
int main(void)
{
	int A, B, result;

	scanf("%d %d", &A, &B);

	result = A + B;
	printf("%d\n", result);

	result = A - B;
	printf("%d\n", result);

	result = A * B;
	printf("%d\n", result);

	result = A / B;
	printf("%d\n", result);

	result = A % B;
	printf("%d\n", result);

	return 0;
}