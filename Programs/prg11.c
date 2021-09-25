#include <stdio.h>
#include <math.h>
void main()
{
    int h, b;
    float area;
    printf("\nEnter the height of the Triangle: ");
    scanf("%d", &h);
    printf("\nEnter the base of the Triangle: ");
    scanf("%d", &b);

    /*
        Formula for the area of the triangle = (height x base)/2
        
    */
    area = (h * b) / 2;
    printf("\nThe area of the triangle is: %f", area);
}
