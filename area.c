/* Author: Shubham Kumar Singh
Purpose of program: C program to find the area and perimeter of a rectangle and then
compare it. 
Date: 17 August 2022 */

//Area of rectangle = area, length = len, breadth = brdth, perimeter of rectangle = perimtr.

#include <stdio.h>
int main()

{
    int area, len, brdth, perimtr;

    printf("\nEnter the length of the rectangle: ");
    scanf("%d", &len);

    printf("\nEnter the breadth of the rectangle: ");
    scanf("%d", &brdth);

//Area of the rectangle.
    area = len * brdth;
    printf("Area of the rectangle: %d\n", area);

//Perimeter of the rectangle.
    perimtr = 2 * (len + brdth);
    printf("Perimeter of the rectangle: %d\n", perimtr);

    if(area > perimtr)
        printf("Area of the rectangle is greater than the perimeter of the rectangle.");

        else if(area < perimtr)
        printf("Perimeter of the rectangle is greater than the area of the rectangle.");

        else
        printf("Area of the rectangle is equal to the perimeter of the rectangle.");

        return 0;

        
}
