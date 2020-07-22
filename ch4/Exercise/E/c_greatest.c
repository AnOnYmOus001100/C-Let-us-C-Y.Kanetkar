/*
Author: AnOnYmOus001100
Date: 19/07/2020 
Description: To find the greatest among three numbers entered using conditionals.
*/

#include<stdio.h>

int main()
{

	int n1, n2, n3;

	printf ("Enter three numbers: ");
	scanf ("%d%d%d",&n1,&n2,&n3);

	(n1 > n2 && n1 > n3) ? printf ("\n%d is greatest.",n1) :  (n2 > n3 && n2 > n1) ? printf ("\n%d is greatest.",n2) : printf ("\n%d is greatest.",n3);

	return 0;
}
