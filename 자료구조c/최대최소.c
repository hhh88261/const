#include<stdio.h>

void main() {
	
	int a;
	int b;
	scanf_s("a를 입력하시오 :\n",&a);
	scanf_s("b를 입력하시오: \n",&b);

	if (a < b) 
	{
		printf("Max = b\n", b);
	}
	else 
	{
		printf("Max = a\n", a);
	}
}