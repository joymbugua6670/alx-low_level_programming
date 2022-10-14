<<<<<<< HEAD
#incude < stdio.h >
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	 printf("Size of a int: %i byte(s)\n", sizeof(int));
	  printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	   printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	    printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
=======
#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer
 *
 * Return: (0)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(a));
        printf("Size of int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu byte(S)\n", (unsigned long)sizeof(e));
	return (o);
}
 

>>>>>>> 078a4ccb1578fddbd26e8d93cb0a26c7f7d1b87b
