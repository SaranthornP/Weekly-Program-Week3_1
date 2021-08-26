#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a * 2 - 1; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 1; i <= a - 2; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*");
		for (int j = (a - 1 - i) * 2 - 1; j > 0; j--) {
			printf(" ");
		}
		printf("*\n");
	}
	for (int j = 0; j < a-1; j++) {
		printf(" ");
	}
	printf("*\n");
	for (int i = a-2; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*");
		for (int j = (a - 1 - i) * 2 - 1; j > 0; j--) {
			printf(" ");
		}
		printf("*\n");
	}
	for (int i = 0; i < a * 2 - 1; i++) {
		printf("*");
	}
	return 0;
}