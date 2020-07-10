/* Author: AnOnYmOus001100 , Date: 17/06/2020 */
/* If a five digit number is input through the keyboard, calculate sum of its digits */

#include<stdio.h>
int main()
{
    int num, temp, digit, sum;

    printf ("Enter the number:");
    scanf ("%d",&num);

    //can also be done with a loop
    //repeating 5 times for 5 digits
    sum = 0;
    digit = num % 10;
    sum = sum + digit;
    temp = num / 10;
    num = temp;

    digit = num % 10;
    sum = sum + digit;
    temp = num / 10;
    num = temp;

    digit = num % 10;
    sum = sum + digit;
    temp = num / 10;
    num = temp;

    digit = num % 10;
    sum = sum + digit;
    temp = num / 10;
    num = temp;

    //fifth digit
    digit = num % 10;
    sum = sum + digit;
    
    printf ("\nThe sum is: %d",sum);

return 0;
}