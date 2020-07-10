/* Author: AnOnYmOus001100 , Date: 17/06/2020 */
/* If a five digit number is input through the keyboard, reverse it */

#include<stdio.h>
int main()
{
    int num, temp, reverse, rem;

    printf ("Enter the number:");
    scanf ("%d",&num);

    temp = num;
    //can also be done with a whiile or loop
    //repeating 5 times for 5 digits
    reverse = 0;
    rem = temp % 10;
    reverse = reverse * 10 + rem;
    temp = temp / 10;

    rem = temp % 10;
    reverse = reverse * 10 + rem;
    temp = temp / 10;

    rem = temp % 10;
    reverse = reverse * 10 + rem;
    temp = temp / 10;

    rem = temp % 10;
    reverse = reverse * 10 + rem;
    temp = temp / 10;

   
    //fifth digit
    rem = temp % 10;
    reverse = reverse * 10 + rem;
   
    printf ("\nThe reverse of %d is: %d",num,reverse);

return 0;
}