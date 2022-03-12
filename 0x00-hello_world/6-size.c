#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizedof(char));
printf("Size of an int: %lu byte(s)\n", sizedof(int));
printf("Size of a long int: %lu byte(s)\n", sizedof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizedof(long long int));
printf("Size of a float: %lu byte(s)\n", sizedof(float));
}
