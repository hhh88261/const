#include<stdio.h>

void main() {
	
	int age;
	printf("your age:");
	scanf_s("%d", &age);

	if (age%2) {
		printf("your age is odd number.\n");
	}
	else {
		printf("your age is even number.\n");
	}
}