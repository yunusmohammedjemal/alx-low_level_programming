#include<stdio.h>
#include "main.h"
/**
 * main - printing a-z 10x
 *
 * Return: Always 0 (sucess)
 */
void print_alphabet_x10(void);
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = a ; j <= z ; j++)
		{
		putchar(i);
		}
		putchar('\n');
	}
	return (0);
}
int main(void)
{
print_alphabet_x10();
return (0);
}