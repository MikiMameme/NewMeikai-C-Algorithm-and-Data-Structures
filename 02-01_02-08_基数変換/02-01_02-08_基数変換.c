/*整数を２進数～３６進数に基数変換*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*整数値xをn進数に変換して配列dに下位桁から格納*/
int card_convr(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;

	if (x == 0)
		d[digits++] = dchar[0];
	else
		while (x) {
			d[digits++] = dchar[x % n];
			x /= n;
		}
	return digits;
}

int main(void)
{
	int i;
	unsigned no;
	int cd;
	int dno;
	char cno[512];
	int retry;

	puts("１０進数を基数変換します");
	do {
		printf("変換する非負の整数 :");
		scanf("%u", &no);
		do {
			printf("何進数に変換しますか（２～３６） :");
			scanf("%d", &cd);
		} while (cd < 2 || cd > 36);

		dno = card_convr(no, cd, cno);

		printf("%d進数では", cd);
		for (i = dno - 1; i >= 0; i--)
			printf("%c", cno[i]);
		printf("です\n");

		printf("もう一度しますか（1...はい / 0...いいえ） :");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}