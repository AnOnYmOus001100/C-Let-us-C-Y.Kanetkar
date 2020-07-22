/*
	Author: AnOnYmOus001100
	Date: 18/07/2020 

Using conditional determine
	1. whether the character entered through the entered through the keyboard is a
	   lower case alphabet or not.
	2. Whether a character entered through the keyboard is a special symbol or not.
*/

#include <stdio.h>

int main()
{
	char ch;
	int char_to_int;

	printf ("Enter a character: ");
	scanf ("%c",&ch);

	char_to_int = ch;	// typecasting char to int

	(char_to_int >= 97 && char_to_int <= 122) ? printf  ("\nLower case alphabet.") : ((char_to_int >= 0 && char_to_int <= 47) || (char_to_int >= 58 && char_to_int <= 64) || (char_to_int >= 91 && char_to_int <= 96) || (char_to_int >= 123 && char_to_int <= 127)) ? printf ("\nSpecial Symbol.") : printf ("\nNeither a Upper case alphabet nor Special Case.");

	return 0;
}
