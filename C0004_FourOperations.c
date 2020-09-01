#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 20

int main()
{

	char user[SIZE];

	printf("Enter username : ");
	scanf("%s", user);

	printf("Hello Hello! Mr/Ms %s , welcome to the c service. :D\n", user);

	float number1, number2;

	printf("Enter 1st number : ");
	scanf("%f", &number1);

	printf("Enter 2nd number : ");
	scanf("%f", &number2);

	printf("Addition       : %.2f\n", number1 + number2);
	printf("Subtraction    : %.2f\n", abs(number1 - number2)); // used absolute to the minValue-maxValue for is positive
	printf("Multiplication : %.2f\n", number1 * number2);
	printf("Division       : %.2f or : %.2f\n", number1 / number2, number2 / number1);
	// floatlarda mod almamiza izin vermiyor

	int number3, number4;

	scanf("%d%d", &number3, &number4);
	printf("Mod/Remainder  : %d or : %d\n", number3 % number4, number4 % number3);
	{
		int a = number3, b = number4;
		a += b;
		printf("Addition       : %d\n", a);
	}
	{
		int a = number3, b = number4;
		a -= b;
		printf("Subtraction    : %d\n", a);
	}
	{
		int a = number3, b = number4;
		a *= b;
		printf("Multiplication : %d\n", a);
	}
	{
		int a = number3, b = number4;
		a /= b;
		printf("Division       : %d\n", a);
	}
}