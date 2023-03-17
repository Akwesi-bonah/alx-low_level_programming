# include<stdio.h>
/**
 * main - Entry
 * Description: print alphabet in lower case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	return (0);
}
