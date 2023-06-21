#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int first = 1;
	int second = 2;
	int count;

	printf("%d, %d", first, second);

	for (count = 3; count <= 98; count++)
	{
		int next = first + second;
		printf(", %d", next);

		// Shift numbers to calculate the next Fibonacci number
		first = second;
		second = next;
	}

	printf("\n");

	return 0;
}
