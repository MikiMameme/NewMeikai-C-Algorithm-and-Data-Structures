/*１、２・・・nの和を求める(for文)*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int i, n;
	int sum;

	puts("１からnまでの和を求めます");
	printf("nの値 :");
	scanf("%d", &n);

	sum = 0;
	i = 1;

	for (i = 1; i <= n; i++) {
		sum += i;
	}

	printf("1から%dまでの和は%dです\n", n, sum);

	return 0;
}