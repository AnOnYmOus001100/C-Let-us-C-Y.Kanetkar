/* Convert temperature input in Fahrenheit to Centigrade */
/* Author: AnOnYmOus001100  Date:10/06/2020 */

#include <stdio.h>
int main()
{
    float Centigrade, Fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&Fahrenheit);

    /* Formula to Convert Centigrade to Fahrenheit */
    Centigrade = (Fahrenheit - 32) / 9;

    printf("\nThe temperature in Centigrade is %fC.",Centigrade);

    return 0;
}