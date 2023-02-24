#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz\t");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz\t");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\t");
		} else if (i == 1)
		{
			printf("%d\t", i);
		} else
		{
			printf("%d\t", i);
		}
	}
	printf("\n");

	return (0);
}

