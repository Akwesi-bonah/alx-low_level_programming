# include<stdio.h>
/**
 * main - Entry
 * Description: print alphabet in lower case and upper cade
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
        
        for (letter = 'A'; letter <= 'Z'; letter++)
        {
                putchar(letter);
        }
        putchar('\n');

        return (0);
}
