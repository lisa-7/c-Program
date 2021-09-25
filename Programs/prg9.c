//program t calculate area of square
#include<math.h>
#include<stdio.h>
void main()
{
    int a,area;
    printf("\nEnter the Length of Side : ");
    scanf("%d", &a);

    area = a * a;
    printf("\nArea of Square : %d", area);
}