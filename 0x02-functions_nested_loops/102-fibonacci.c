#include <stdio.h>

/**
 * print_fibonacci_sequence - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci_sequence(int n)
{
	int i;
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;

	printf("%lu, %lu", first, second);

	for (i = 3; i <= n; i++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	print_fibonacci_sequence(50);
	return (0);
}
