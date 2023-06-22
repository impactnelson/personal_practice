#include <stdio.h>

/**
 * main: to show the max number.
 * Return: result which is an int
 */

int Max(int num1, int num2, int num3, int num4);

int main()
{
	int a = 50;
	int b= 100;
	int c=500;
	int d=450;

	ret = Max(a, b, c, d);

	printf("Max number is : %d\n", ret);

	return 0;
}

int Max(int num1, int num2, int num3, int num4){

	int result;
	if (num3 > num4)
		result = num3;
	else
		result = num4;

	return result;
}
