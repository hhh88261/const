#include<stdio.h>

void main() {
	
	int a;
	int b;
	scanf_s("a�� �Է��Ͻÿ� :\n",&a);
	scanf_s("b�� �Է��Ͻÿ�: \n",&b);

	if (a < b) 
	{
		printf("Max = b\n", b);
	}
	else 
	{
		printf("Max = a\n", a);
	}
}