/* Calculate the area, perimeter of a rectangle and area, circumference of a circle, input taken are length, breadth of rectangle and radius of circle. */
/* Author: AnOnYmOus001100  Date:10/06/2020 */

#include <stdio.h>
int main()
{
    float radius, length, breadth, circumference, perimeter, area_circle, area_rectangle;

    printf("Enter the length, breadth of rectangle and radius of circle: ");
    scanf("%f %f %f",&length,&breadth,&radius);

    /* Calculating area, perimeter and circumference */
    perimeter = 2 * (length + breadth);
    area_rectangle = length * breadth;
    area_circle = 2 * 3.14 * radius;
    circumference = 3.14 * radius * radius;

    printf("\nThe perimeter of rectangle is %f and area is %f.",perimeter,area_rectangle);
    printf("\nThe circumference of circle is %f and area is %f.",circumference,area_circle);

    return 0;
}