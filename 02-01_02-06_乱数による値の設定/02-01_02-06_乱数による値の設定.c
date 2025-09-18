/*配列の要素の最大値を求める*/

#define _CRT_SECURE_NO_WARNINGS

#include<time.h>
#include<stdio.h>
#include<stdlib.h>

/*要素数nの配列aの要素の最大値を求める*/
int maxof(const int a[], int n)
{
	int i;
	int max = a[0];

	for (i = 1; i < n; i++)
		if (a[i] > max) max = a[i];

	return max;
}

int main(void)
{
	int i;
	int* height;
	int number;

	printf("人数 :");
	scanf("%d", &number);

	height = calloc(number, sizeof(int));

	srand(time(NULL));
	printf("%d人の身長を入力してください\n", number);
	for (i = 0; i < number; i++) {
		height[i] = 100 + rand() % 90;
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("最大値は%dです\n", maxof(height, number));
	free(height);
	return 0;
}