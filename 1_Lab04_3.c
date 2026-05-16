#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
int main(void)
{
	int n;
	int i = 0;
	scanf("%d", &n);
	int scores[100000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &scores[i]);
	}
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d ", scores[i]);
	}


	return 0;
}