#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers of base 10'
 * Return: Always 0
  */
int main(void)
{
	int n = 122;
	
	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	printf("\n");
	return (0);
}

