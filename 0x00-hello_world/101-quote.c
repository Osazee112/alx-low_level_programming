/*
 * FILE:101-quote.c
 * Auth: Brennan D Baraban
 */

#include <unistd.h>

/**
 * main - prints Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015- 10- 19\n",);
	return (1);
}
