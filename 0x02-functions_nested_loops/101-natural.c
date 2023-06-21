#include <stdio.h>

/**
 * calculate_sum - Calculates the sum of multiples of 3 or 5
 *
 * Return: The sum of multiples of 3 or 5
 */
int calculate_sum(void)
{
	int total_sum = 0;
	int number;

	for (number = 1; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
			total_sum += number;
	}

	return (total_sum);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int result = calculate_sum();

	printf("%d\n", result);

	return (0);
}
