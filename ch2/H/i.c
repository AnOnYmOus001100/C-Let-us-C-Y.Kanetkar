/* Author: AnOnYmOus001100 , Date: 10/07/2020 */
/* Given an amount of N unit, there are notes of denominations 1, 2 , 5, 10, 50 and 100 unit, find the minimum number of notes that will combine or sum to give the amount N unit. */

#include<stdio.h>

int main()
{
    int amount, count = 0, temp;

    printf ("Enter the amount(whole amount/ not decimal): ");
    scanf ("%d",&amount);
    temp = amount;

    //counting 100 unit notes
    count = amount/100;
    amount = amount%100;

    //counting 50 unit notes
    count = count + amount/50;
    amount = amount%50;

    //counting 10 unit notes
    count = count + amount/10;
    amount = amount%10;

    //counting 5 unit notes
    count = count + amount/5;
    amount = amount%5;

    //counting 2 unit notes
    count = count + amount/2;
    amount = amount%2;

    //counting 1 unit notes
    count = count + amount/1;

    printf ("\nMinimum notes needed to make up %d units is %d.",temp,count);

}