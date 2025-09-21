/*関数を利用した構造体の配列からの探索*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char name[10];
	int height;
	int weight;
}Person;

/*比較関数（名前順）*/
int npcmp(const Person* x, const Person* y)
{
	return strcmp(x->name, y->name);
}

int main(void)
{
	Person x[] = {
		{"ABE", 179, 79},
		{"HANGOH", 172, 63},
		{"SHIBATA", 176, 52},
		{"SUGIYAMA", 165, 51},
		{"TAKAOKA", 181, 73},
		{"TSURUMI", 172, 84},
	};
	int nx = sizeof(x) / sizeof(x[0]);
	int retry;

	puts("名前による探索を行います");
	do {
		Person temp, * p;

		printf("名前 :");
		scanf("%s", temp.name);

		p = bsearch(&temp, x, nx, sizeof(Person),
			(int(*)(const void*, const void*))npcmp);
		if (p == NULL)
			puts("探索に失敗しました");
		else {
			puts("探索成功、以下の要素を見つけました");
			printf("x[%d] : %s %dcm %dkg\n",
				(int)(p - x), p->name, p->height, p->weight);
		}
		printf("もう一度しますか (1)はい / (0)いいえ :");
		scanf("%d", &retry);
	} while (retry == 1);
	return 0;
}