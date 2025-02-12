#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
	case 2:
		subtract();
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void subtract() {
	double num1, num2, result;
	printf("Enter the first value:");
	int garbCheck1 = scanf("%lf", &num1);
	printf("Enter the second value:");
	int garbCheck2 = scanf("%lf", &num2);

	if (garbCheck1 != 1 || garbCheck2 != 1) {
		printf("numbers only");
		exit(EXIT_FAILURE);
	}
	result = num1 - num2;
	printf("%lf - %lf = %lf\n", num1, num2, result);
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	int garbCheck3 = scanf("%lf", &num1);
	printf("Enter the second value:");
	int garbCheck4 = scanf("%lf", &num2);

	if (garbCheck3 != 1 || garbCheck4 != 1) {
		printf("numbers only");
		exit(EXIT_FAILURE);
	}
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}