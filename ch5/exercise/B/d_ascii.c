/*
	Author: AnOnYmOus001100
	Date: 22/07/2020
	Description: To print all the ASCII values and their equivalent characters.
*/

#include<stdio.h>

int main()
{
	int ascii_value;

	for (ascii_value = 0; ascii_value <= 255; ascii_value++)
		printf ("ASCII: %d 	, Character: %c\n",ascii_value,ascii_value);

	return 0;
}
