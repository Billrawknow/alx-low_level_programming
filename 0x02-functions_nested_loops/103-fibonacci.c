#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates the sum of even-valued terms
 *              in the Fibonacci sequence that do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int first = 1;
	int second = 2;
	int next;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;

		next = first + second;
		first = second;
		second = next;
	}

	printf("%d\n", sum);

	return (0);
}
