#include "main.h"
/**
 * is_printable - Evaluates if char is printable
 * @c: Char to be evaluated
 * Return: 1 sucess, 0 if not
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return(0);
}
/**
 * append_hexa_code - Append ascci in hexadecimal
 * @buffer: Array of chars
 * @i: Index at which to start appending
 * @ascii_code: ASSCI CODE
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;
	buffer[i++] = '\\';
	buffer[i++] = 'x';
	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];
	return (3);
}
/**
 * is_digit - verifies if a char is adigit
 * @c: char to be evaluated
 * Return: 1 if it is digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/**
 * convert_size_number - Casts a number to the specfied size
 * @num: Number to be casted
 * @size: number that indicates the type
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);
	return ((int)num);
}
/**
 * convert_size_unsigned - CAsts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the types
 * Return: cssted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}
