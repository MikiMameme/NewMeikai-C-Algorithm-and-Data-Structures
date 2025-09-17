/*要素型がint型で要素数が5の配列*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define N 5

int main()
{
	int i;
	int a[N];

	for (i = 0; i < N; i++) {
		printf("a[%d] :", i);
		scanf("%d", &a[i]);
	}
	puts("各要素の値");
	for (i = 0; i < N; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}