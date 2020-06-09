/* Calculate the aggregate and percentage obtained by a student given the marks of five different subjects as input */
/* Author: AnOnYmOus001100  Date:10/06/2020 */

#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, per_marks, agg_marks;

    printf("Enter marks in five subjects(<100):");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);

    agg_marks = m1 + m2 + m3 + m4 + m5;
    per_marks = agg_marks / 5;

    printf("\nThe aggregate marks is %f and percentage is %f percent",agg_marks,per_marks);

    return 0;
}

