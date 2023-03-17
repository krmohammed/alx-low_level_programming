#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 1 if successful. 0 otherwise
 *
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5) {
		printf("Last d

	return 0;
}
