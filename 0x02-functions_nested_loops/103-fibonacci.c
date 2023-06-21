#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;
	unsigned long sum = 0;

	printf("%lu, %lu, ", first, second);

	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;

		next = first + second;
		first = second;
		second = next;
	}

	printf("\nSum of even-valued terms: %lu\n", sum);

	return (0);
}
