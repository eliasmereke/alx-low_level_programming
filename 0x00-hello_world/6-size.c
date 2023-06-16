#include<stdio.h>
/**
 * main - A program that prints the size of various types
 *
 * Return: Always 0 (succss)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %d 1 byte(s)\n",sizeof(a));
printf("Size of a int: %d 1 byte(s)\n",sizeof(b));
printf("Size of a long int: %d 1 byte(s)\n",sizeof(c));
printf("Size of a long long int: %d 1 byte(s)\n",sizeof(d));
printf("Size of a float: %d 1 byte(s)\n",sizeof(f));
return (0);
}
