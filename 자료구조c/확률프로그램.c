#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//주사위를 만 번 던져 1~6 빈도수 구하기
void main() {
	int dice[6] = { 0, };
	int i;
	int j;
	srand(time(NULL));

	for (i = 0; i < 10000;i++)
	{
		dice[rand() % 6]++;
	}
	for (j = 0; j < 6; j++)
	{
		printf("%d이 나온 횟수 : %d\n", j + 1, dice[j]);
	}
}


